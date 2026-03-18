/*
 * XREFs of ?GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@1@Z @ 0x180128740
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800B5068 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1801275E4 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall COverlayContext::GetContextCandidates(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 i; // rdi
  _QWORD *v8; // r9
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax

  v3 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 24); i = (unsigned int)(i + 1) )
  {
    v8 = (_QWORD *)(*(_QWORD *)a2 + 8 * i);
    if ( *(_QWORD *)*v8 == a1 )
    {
      v9 = *(_DWORD *)(a3 + 24);
      v10 = v9 + 1;
      if ( v9 + 1 >= v9 )
      {
        v3 = 0;
        if ( v10 <= *(_DWORD *)(a3 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 24)) = *v8;
          *(_DWORD *)(a3 + 24) = v10;
          continue;
        }
        v11 = DynArrayImpl<0>::AddMultipleAndSet(a3, 8u, 1);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1229u);
        return (unsigned int)v3;
      }
    }
  }
  return (unsigned int)v3;
}
