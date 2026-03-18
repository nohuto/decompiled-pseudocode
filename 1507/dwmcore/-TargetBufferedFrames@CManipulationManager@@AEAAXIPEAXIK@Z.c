/*
 * XREFs of ?TargetBufferedFrames@CManipulationManager@@AEAAXIPEAXIK@Z @ 0x18012BF38
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012C014 (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulationManager::TargetBufferedFrames(
        CManipulationManager *this,
        int a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  int v6; // eax
  __int64 i; // r10
  __int64 v12; // rbx
  unsigned int v13; // edx
  __int64 v14; // r9
  unsigned int v15; // r8d
  __int64 v16; // rcx

  v6 = *((_DWORD *)this + 50) - 1;
  for ( i = v6; i >= 0; *(_BYTE *)(*(_QWORD *)(v12 + 8 * i--) + 28LL) |= 1u )
  {
    v12 = *((_QWORD *)this + 24);
    v13 = 0;
    v14 = *(_QWORD *)(v12 + 8 * i);
    v15 = *(_DWORD *)(v14 + 16);
    if ( a5 < v15 && *(_DWORD *)(152LL * a5 + v14 + 36) == a2 )
    {
      v13 = a5;
    }
    else if ( v15 )
    {
      while ( *(_DWORD *)(152LL * v13 + v14 + 36) != a2 )
      {
        if ( ++v13 >= v15 )
          goto LABEL_10;
      }
      a5 = v13;
    }
LABEL_10:
    if ( v13 == v15 )
      break;
    v16 = 152LL * v13;
    if ( *(_QWORD *)(v16 + v14 + 56) != -1LL )
      break;
    *(_QWORD *)(v16 + v14 + 56) = a3;
    *(_DWORD *)(*(_QWORD *)(v12 + 8 * i) + v16 + 176) = a4;
  }
}
