/*
 * XREFs of ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x18000FF60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180010178 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180010DA4 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

float __fastcall CProcess::GetSessionDisplayPolicyVolume(CProcess *this)
{
  CProcess *v1; // rbx
  float v2; // xmm6_4
  __int64 v3; // r11
  __int64 v4; // rdx
  int v5; // r9d
  int v6; // r10d
  int v7; // edi
  DWORD v8; // ebx
  struct TSSession *v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = this;
  v2 = FLOAT_1_0;
  if ( !*((_DWORD *)this + 102) )
  {
    v3 = *((int *)this + 70);
    v4 = 0LL;
    v5 = 0;
    v6 = 0;
    v7 = 1;
    if ( v3 <= 0 )
      goto LABEL_17;
    do
    {
      if ( v4 < 0 || v6 >= *((_DWORD *)v1 + 70) )
      {
        ATL::_AtlRaiseException((unsigned int)this, v4);
        JUMPOUT(0x18001004CLL);
      }
      ++v6;
      this = *(CProcess **)(*((_QWORD *)v1 + 34) + 8 * v4++);
      v5 += *((_DWORD *)this + 18);
    }
    while ( v4 < v3 );
    if ( !v5 )
    {
LABEL_17:
      if ( !CProcess::GetActiveRenderStreamCount((CProcess *)((char *)v1 - 16), 0x12u) )
      {
        v8 = *((_DWORD *)v1 + 39);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
        if ( !(unsigned int)TsSessionFromSessionId(v8, 0, 0LL, &v10) )
          v7 = *((_DWORD *)v10 + 57);
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
        if ( !v7 )
          return 0.0;
      }
    }
  }
  return v2;
}
