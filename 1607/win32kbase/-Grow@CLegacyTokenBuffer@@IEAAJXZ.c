/*
 * XREFs of ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C00F4A88
 * Callers:
 *     ?GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z @ 0x1C0016F5C (-GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0019F9C (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
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
    if ( *v4 != (CLegacyTokenBuffer *)((char *)this + 16) )
      __fastfail(3u);
    *(_QWORD *)v3 = (char *)this + 16;
    v2 = 0;
    *(_QWORD *)(v3 + 8) = v4;
    *v4 = (CLegacyTokenBuffer *)v3;
    *((_QWORD *)this + 3) = v3;
    *((_QWORD *)this + 262) = v3 + 20;
    *((_QWORD *)this + 261) = v3;
    *((_DWORD *)this + 526) = 2048;
  }
  return v2;
}
