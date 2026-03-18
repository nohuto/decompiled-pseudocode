/*
 * XREFs of ?UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z @ 0x1801677B4
 * Callers:
 *     ?DetachFromChannel@CAnalogExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801656B0 (-DetachFromChannel@CAnalogExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DeactivateView@CAnalogExclusiveView@@QEAAXXZ @ 0x180165670 (-DeactivateView@CAnalogExclusiveView@@QEAAXXZ.c)
 *     ?FlushD3DDevice@CAnalogCompositorTarget@@QEAAXXZ @ 0x1801670BC (-FlushD3DDevice@CAnalogCompositorTarget@@QEAAXXZ.c)
 */

void __fastcall CAnalogCompositorClient::UnregisterExclusiveView(
        CAnalogCompositorClient *this,
        struct CAnalogExclusiveView *a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rbx
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 v7; // rcx

  if ( *((_BYTE *)a2 + 128) )
    CAnalogExclusiveView::DeactivateView(a2);
  AcquireSRWLockExclusive(&stru_1801F03B0);
  v3 = dword_1801F0390;
  v4 = 0LL;
  if ( dword_1801F0390 )
  {
    v5 = qword_1801F0378;
    do
    {
      if ( *(struct CAnalogExclusiveView **)(v5 + 8 * v4) == a2 )
      {
        if ( (unsigned int)v4 < v3 )
        {
          v6 = v4;
          if ( (unsigned int)v4 < v3 - 1 )
          {
            do
            {
              v7 = v6++;
              *(_QWORD *)(v5 + 8 * v7) = *(_QWORD *)(v5 + 8LL * v6);
              v3 = dword_1801F0390;
            }
            while ( v6 < dword_1801F0390 - 1 );
          }
          dword_1801F0390 = v3 - 1;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
        }
        CMILCOMBase::InternalRelease(a2);
        v3 = dword_1801F0390;
        v5 = qword_1801F0378;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v3 );
  }
  ReleaseSRWLockExclusive(&stru_1801F03B0);
  if ( *((_QWORD *)&xmmword_1801F03A0 + 1) )
    CAnalogCompositorTarget::FlushD3DDevice(*((CAnalogCompositorTarget **)&xmmword_1801F03A0 + 1));
}
