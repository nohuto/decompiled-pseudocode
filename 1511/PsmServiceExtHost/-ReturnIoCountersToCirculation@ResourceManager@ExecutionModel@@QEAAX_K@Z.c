/*
 * XREFs of ?ReturnIoCountersToCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003DE4C
 * Callers:
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18001F120 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003DD2C (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::ReturnIoCountersToCirculation(
        ExecutionModel::ResourceManager *this,
        unsigned __int64 a2)
{
  __int64 v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned __int64 v7; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  *((_QWORD *)this + 24) -= a2;
  v2 = *((_QWORD *)this + 23);
  v7 = a2;
  if ( (*(_BYTE *)(v2 + 1344) & 4) == 0 )
  {
    ExecutionModel::ResourceManager::ReplenishIoCounterPool(this, a2);
    if ( (unsigned int)dword_180071060 > 4 )
    {
      if ( TlgKeywordOn(v3, 1uLL) )
      {
        v11 = 0;
        v9 = &v7;
        v10 = 8;
        TlgWrite(v4, &unk_180062337, v5, v6, 3u, &pData);
      }
    }
  }
}
