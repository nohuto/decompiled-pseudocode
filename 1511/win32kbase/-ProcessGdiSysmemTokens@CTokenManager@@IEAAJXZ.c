/*
 * XREFs of ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C003CFA8
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C003D07C (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x1C003D218 (-EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C003D4A4 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z @ 0x1C003D858 (-GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z.c)
 *     GreSfmGetNotificationTokens @ 0x1C004E6F0 (GreSfmGetNotificationTokens.c)
 */

__int64 __fastcall CTokenManager::ProcessGdiSysmemTokens(CLegacyTokenBuffer **this)
{
  int CurrentBufferPointer; // edi
  int NotificationTokens; // eax
  CLegacyTokenBuffer *v4; // rcx
  LONG v5; // r8d
  unsigned int v6; // edx
  CLegacyTokenBuffer *v7; // rcx
  LONG PreviousState; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int8 *v11; // [rsp+50h] [rbp+18h] BYREF

  CTokenManager::AcquireTokenManagerLock((CTokenManager *)this);
  CurrentBufferPointer = CTokenManager::EnsureCurrentLegacyTokenBuffer((CTokenManager *)this);
  if ( CurrentBufferPointer >= 0 )
  {
    CurrentBufferPointer = CLegacyTokenBuffer::GetCurrentBufferPointer(this[15], &v11, &v10, 0x280u);
    if ( CurrentBufferPointer >= 0 )
    {
      PreviousState = 0;
      NotificationTokens = GreSfmGetNotificationTokens(v10);
      v4 = this[15];
      CurrentBufferPointer = NotificationTokens;
      v5 = PreviousState;
      v6 = 40 * PreviousState;
      *(_DWORD *)(*((_QWORD *)v4 + 261) + 16LL) += PreviousState;
      *(_DWORD *)(*((_QWORD *)v4 + 261) + 2068LL) += v6;
      *((_DWORD *)v4 + 526) -= v6;
      *((_QWORD *)v4 + 262) += v6;
      if ( NotificationTokens == -1073741789 )
        CurrentBufferPointer = 0;
      if ( CurrentBufferPointer >= 0 && v5 )
      {
        v7 = this[4];
        PreviousState = 0;
        ZwSetEvent(v7, &PreviousState);
      }
    }
  }
  *this = 0LL;
  ExReleasePushLockExclusiveEx(this + 8);
  return (unsigned int)CurrentBufferPointer;
}
