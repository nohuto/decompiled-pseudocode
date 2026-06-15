/*
 * XREFs of ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x18000F650
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

float __fastcall CProcess::GetSessionDisplayPolicyVolume(CProcess *this)
{
  float v1; // xmm6_4
  DWORD v2; // ebx
  int v3; // edi
  struct TSSession *v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = FLOAT_1_0;
  if ( !*((_DWORD *)this + 102) )
  {
    v2 = *((_DWORD *)this + 39);
    v3 = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    if ( !(unsigned int)TsSessionFromSessionId(v2, 0, 0LL, &v5) )
      v3 = *((_DWORD *)v5 + 57);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    if ( !v3 )
      return 0.0;
  }
  return v1;
}
