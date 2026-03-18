/*
 * XREFs of ?TargetBufferedFrames@CManipulationManager@@AEAAXIPEAXIK@Z @ 0x1800072C0
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180006FDC (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
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
  __int64 v8; // r10
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r9
  unsigned int v15; // r8d
  unsigned int v16; // r11d

  v6 = *((_DWORD *)this + 50) - 1;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v16 = a5;
    do
    {
      v13 = *((_QWORD *)this + 24);
      v11 = 0;
      v14 = *(_QWORD *)(v13 + 8 * v8);
      v15 = *(_DWORD *)(v14 + 16);
      if ( v16 < v15 && *(_DWORD *)(152LL * v16 + v14 + 36) == a2 )
      {
        v11 = v16;
      }
      else if ( v15 )
      {
        while ( *(_DWORD *)(152LL * v11 + v14 + 36) != a2 )
        {
          if ( ++v11 >= v15 )
            goto LABEL_4;
        }
        v16 = v11;
      }
LABEL_4:
      if ( v11 == v15 )
        break;
      v12 = 152LL * v11;
      if ( *(_QWORD *)(v12 + v14 + 56) != -1LL )
        break;
      *(_QWORD *)(v12 + v14 + 56) = a3;
      *(_DWORD *)(*(_QWORD *)(v13 + 8 * v8) + v12 + 176) = a4;
      *(_BYTE *)(*(_QWORD *)(v13 + 8 * v8--) + 28LL) |= 1u;
    }
    while ( v8 >= 0 );
  }
}
