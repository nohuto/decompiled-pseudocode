/*
 * XREFs of KiIntSteerChooseInitialTargetProcessors @ 0x140122F3C
 * Callers:
 *     KiIntSteerConnect @ 0x140122B3C (KiIntSteerConnect.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1400F6988 (KeFindFirstSetRightGroupAffinity.c)
 *     KiIntRedirectConnnect @ 0x14011B51C (KiIntRedirectConnnect.c)
 */

int __fastcall KiIntSteerChooseInitialTargetProcessors(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  bool v7; // zf
  unsigned __int16 v10; // cx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ecx

  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  v7 = KiInterruptSteeringDisabled == 0;
  *a5 = 0;
  if ( v7 && (HvlpFlags & 4) == 0 && !(_BYTE)dword_140381118 && (unsigned __int16)KiActiveGroups <= 1u )
  {
    LODWORD(v12) = KeQueryActiveProcessorCountEx(0);
    if ( (unsigned int)v12 > 8 || *(_WORD *)(a3 + 32) )
      goto LABEL_22;
    v13 = 0LL;
    if ( LOWORD(KeActiveProcessors[0]) )
      v13 = qword_1403825B8[0];
    if ( *(_QWORD *)(a3 + 24) != v13 )
    {
LABEL_22:
      if ( *a5 )
        return v12;
      goto LABEL_4;
    }
    if ( (KiInterruptControllerInfo & 1) != 0 && !*(_DWORD *)(a3 + 16)
      || (KiInterruptControllerInfo & 2) != 0 && *(_DWORD *)(a3 + 16) == 1 )
    {
      *a5 = 1;
    }
    if ( *a5 )
      goto LABEL_21;
    if ( (int)KiIntRedirectConnnect(a1, a2, a3) >= 0 )
      *a5 = 2;
    if ( *a5 )
    {
LABEL_21:
      v14 = *(unsigned __int16 *)(a3 + 32);
      *(_WORD *)(a4 + 8) = v14;
      *(_QWORD *)a4 = qword_1402E2468[v14];
      v15 = KiProcessorIndexToNumberMappingTable[(unsigned int)KeFindFirstSetRightGroupAffinity(a4)];
      *(_DWORD *)(a4 + 10) = 0;
      *(_WORD *)(a4 + 14) = 0;
      *(_WORD *)(a4 + 8) = v15 >> 6;
      v12 = 1LL << (v15 & 0x3F);
      *(_QWORD *)a4 = v12;
      goto LABEL_22;
    }
  }
LABEL_4:
  v10 = *(_WORD *)(a3 + 32);
  *(_WORD *)(a4 + 8) = v10;
  v11 = *(_QWORD *)(a3 + 24);
  *(_QWORD *)a4 = v11;
  if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= v10 )
    LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v10 + 1;
  LODWORD(v12) = v10;
  qword_1402E2528[v10] |= v11;
  return v12;
}
