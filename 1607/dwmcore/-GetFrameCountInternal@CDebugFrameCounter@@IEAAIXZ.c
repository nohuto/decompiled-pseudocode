/*
 * XREFs of ?GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ @ 0x180119B34
 * Callers:
 *     ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x180119AE4 (-GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x180119B60 (-GetFrameRate@CDebugFrameCounter@@QEAAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDebugFrameCounter::GetFrameCountInternal(CDebugFrameCounter *this)
{
  unsigned int v1; // edx
  unsigned int v2; // eax

  if ( !*((_BYTE *)this + 24) )
    return 0LL;
  v1 = *((_DWORD *)this + 4);
  if ( v1 == -1 )
    return 0LL;
  v2 = *((_DWORD *)this + 5);
  if ( v1 > v2 )
    return v2 - v1 + 256;
  else
    return v2 - v1;
}
