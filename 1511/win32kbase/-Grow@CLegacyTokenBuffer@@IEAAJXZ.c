/*
 * XREFs of ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C0084594
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C003CD0C (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z @ 0x1C003D858 (-GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 */

__int64 __fastcall CLegacyTokenBuffer::Grow(CLegacyTokenBuffer *this)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  CLegacyTokenBuffer **v4; // rdx

  v2 = -1073741801;
  v3 = Win32AllocPool();
  if ( v3 )
  {
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 2068) = 0;
    *(_QWORD *)(v3 + 8) = v3;
    *(_QWORD *)v3 = v3;
    v4 = (CLegacyTokenBuffer **)*((_QWORD *)this + 3);
    *(_QWORD *)v3 = (char *)this + 16;
    *(_QWORD *)(v3 + 8) = v4;
    if ( *v4 != (CLegacyTokenBuffer *)((char *)this + 16) )
      __fastfail(3u);
    *v4 = (CLegacyTokenBuffer *)v3;
    v2 = 0;
    *((_QWORD *)this + 3) = v3;
    *((_QWORD *)this + 262) = v3 + 20;
    *((_QWORD *)this + 261) = v3;
    *((_DWORD *)this + 526) = 2048;
  }
  return v2;
}
