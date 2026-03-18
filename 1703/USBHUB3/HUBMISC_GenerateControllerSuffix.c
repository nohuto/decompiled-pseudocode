/*
 * XREFs of HUBMISC_GenerateControllerSuffix @ 0x1C002AD04
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0013BC0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBID_BuildClassCompatibleID @ 0x1C0017C88 (HUBID_BuildClassCompatibleID.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C00103D4 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_H @ 0x1C0025980 (WPP_RECORDER_SF_H.c)
 *     WPP_RECORDER_SF_HH @ 0x1C0025A24 (WPP_RECORDER_SF_HH.c)
 *     memmove @ 0x1C0038200 (memmove.c)
 */

__int64 __fastcall HUBMISC_GenerateControllerSuffix(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  const void **v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // r8d
  int v10; // ebp
  unsigned __int16 v11; // dx
  unsigned __int64 v12; // rcx
  NTSTATUS v13; // eax
  int v15; // [rsp+20h] [rbp-28h]

  *(_WORD *)a2 = 0;
  if ( *(_DWORD *)(*a1 + 160LL) == 3 && (v6 = *(const void ***)(*a1 + 168LL), *(_WORD *)v6) )
  {
    v7 = *(unsigned __int16 *)(a2 + 2);
    LOWORD(v7) = v7 - 2;
    if ( (unsigned __int16)v7 > 4u )
    {
      v9 = *(unsigned __int16 *)v6;
      v10 = (unsigned __int16)v7 - 4;
      if ( v9 >= v10 )
      {
        LOWORD(v9) = v7 - 4;
      }
      else
      {
        v11 = *(_WORD *)v6;
        do
        {
          v12 = v11;
          v11 += 2;
          *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * (v12 >> 1)) = 48;
        }
        while ( v11 < v10 );
      }
      memmove(*(void **)(a2 + 8), v6[1], (unsigned __int16)v9);
      v13 = RtlStringCbPrintfW(
              (NTSTRSAFE_PWSTR)(*(_QWORD *)(a2 + 8) + 2 * ((unsigned __int64)v10 >> 1)),
              6uLL,
              L"%02X",
              *(unsigned __int16 *)v6);
      v8 = v13;
      if ( v13 >= 0 )
        *(_WORD *)a2 = *(_WORD *)(a2 + 2) - 2;
      else
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 1432LL),
          2u,
          5u,
          0x77u,
          (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
          v13);
    }
    else
    {
      WPP_RECORDER_SF_HH(*(_QWORD *)(a1[1] + 1432LL), v7, a3, a4, v15);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    WPP_RECORDER_SF_H(*(_QWORD *)(a1[1] + 1432LL), a2, a3, a4, v15);
    return (unsigned int)-1073741275;
  }
  return v8;
}
