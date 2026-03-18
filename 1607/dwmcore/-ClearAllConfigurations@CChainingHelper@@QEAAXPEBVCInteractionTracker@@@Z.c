/*
 * XREFs of ?ClearAllConfigurations@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x1801689CC
 * Callers:
 *     ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18014AFC8 (-ReleaseManipulations@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x180168B54 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z.c)
 */

void __fastcall CChainingHelper::ClearAllConfigurations(CChainingHelper *this, const struct CInteractionTracker *a2)
{
  CChainingHelper *v4; // rbx
  __int64 v5; // r15
  int v6; // ebp
  __int64 v7; // rdi

  v4 = this;
  v5 = 3LL;
  do
  {
    v6 = 0;
    if ( *((int *)a2 + 134) > 0 )
    {
      v7 = 0LL;
      do
      {
        if ( *(_QWORD *)(v7 + *((_QWORD *)a2 + 66)) )
        {
          *(_BYTE *)v4 &= ~2u;
          *((_DWORD *)v4 + 1) = 0;
          *((_BYTE *)this + 36) |= 1u;
          *(_BYTE *)v4 &= ~4u;
          *((_DWORD *)v4 + 2) = 0;
          *((_BYTE *)this + 36) |= 2u;
          CChainingHelper::UpdateConfigurationIfDirty(this, *(struct CInteraction **)(*((_QWORD *)a2 + 66) + v7));
        }
        ++v6;
        v7 += 8LL;
      }
      while ( v6 < *((_DWORD *)a2 + 134) );
    }
    v4 = (CChainingHelper *)((char *)v4 + 12);
    --v5;
  }
  while ( v5 );
}
