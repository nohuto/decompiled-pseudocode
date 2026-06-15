/*
 * XREFs of ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x180011040
 * Callers:
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180010340 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 * Callees:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18004070C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

float __fastcall CProcess::GetScreenReaderPolicyVolume(CProcess *this)
{
  int v1; // ebx
  int v2; // esi
  DWORD v3; // edi
  _QWORD *v4; // rcx
  struct TSSession *v5; // rax
  __int64 *v6; // rcx
  float v7; // xmm6_4
  struct TSSession *v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *((_DWORD *)this + 38);
  v3 = *((_DWORD *)this + 39);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v4 = qword_1800E88D0;
  v9 = 0LL;
  while ( v4 )
  {
    v5 = (struct TSSession *)v4[2];
    v4 = (_QWORD *)*v4;
    if ( v3 == *(_DWORD *)v5 )
      goto LABEL_4;
  }
  if ( (unsigned int)TsSessionCreate(v3, 0LL, &v9) )
  {
    v7 = *(float *)&v9;
    goto LABEL_6;
  }
  v5 = v9;
LABEL_4:
  v6 = (__int64 *)*((_QWORD *)v5 + 22);
  if ( v6 )
  {
    while ( *((_DWORD *)v6 + 4) != v2 )
    {
      v6 = (__int64 *)*v6;
      if ( !v6 )
        goto LABEL_5;
    }
    v1 = 1;
  }
LABEL_5:
  v7 = *((float *)v5 + 56);
LABEL_6:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v1 )
    return FLOAT_1_0;
  else
    return v7;
}
