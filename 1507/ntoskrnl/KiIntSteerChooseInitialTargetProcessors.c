/*
 * XREFs of KiIntSteerChooseInitialTargetProcessors @ 0x140155D28
 * Callers:
 *     KiIntSteerConnect @ 0x1401558E8 (KiIntSteerConnect.c)
 * Callees:
 *     KiIntRedirectConnnect @ 0x14014FA28 (KiIntRedirectConnnect.c)
 *     KiIntSteerEnabled @ 0x140155E7C (KiIntSteerEnabled.c)
 */

__int64 __fastcall KiIntSteerChooseInitialTargetProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 result; // rax
  __int64 v8; // r8
  unsigned int v9; // r9d
  __int64 *v10; // r10
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // ecx

  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *a5 = 0;
  result = KiIntSteerEnabled(a1, a2, a3, (unsigned int)a2);
  if ( !(_BYTE)result || *(_WORD *)(v8 + 32) )
    goto LABEL_2;
  v13 = 0LL;
  if ( LOWORD(KeActiveProcessors[0]) )
    v13 = qword_1403D15E8[0];
  if ( *(_QWORD *)(v8 + 24) != v13 )
  {
LABEL_2:
    if ( *a5 )
      return result;
    goto LABEL_3;
  }
  if ( (KiInterruptControllerInfo & 1) != 0 && !*(_DWORD *)(v8 + 16)
    || (KiInterruptControllerInfo & 2) != 0 && *(_DWORD *)(v8 + 16) == 1 )
  {
    *a5 = 1;
  }
  if ( *a5 )
    goto LABEL_18;
  if ( (int)KiIntRedirectConnnect(v10, v9, v8) >= 0 )
    *a5 = 2;
  if ( *a5 )
  {
LABEL_18:
    v14 = *(unsigned __int16 *)(a3 + 32);
    *(_WORD *)(a4 + 8) = v14;
    v15 = qword_1403328C8[v14];
    *(_QWORD *)a4 = v15;
    if ( v15 )
    {
      _BitScanForward64(&v16, v15);
      v17 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(a4 + 8) + (unsigned int)v16];
    }
    else
    {
      v17 = 0xFFFFFFFFLL;
    }
    v18 = KiProcessorIndexToNumberMappingTable[v17];
    *(_DWORD *)(a4 + 10) = 0;
    *(_WORD *)(a4 + 14) = 0;
    *(_WORD *)(a4 + 8) = v18 >> 6;
    result = 1LL << (v18 & 0x3F);
    *(_QWORD *)a4 = result;
    goto LABEL_2;
  }
LABEL_3:
  v11 = *(_WORD *)(a3 + 32);
  *(_WORD *)(a4 + 8) = v11;
  v12 = *(_QWORD *)(a3 + 24);
  *(_QWORD *)a4 = v12;
  if ( (unsigned __int16)KiIntSteerAffinitizedInterrupts <= v11 )
    LOWORD(KiIntSteerAffinitizedInterrupts) = v11 + 1;
  result = v11;
  qword_140332988[v11] |= v12;
  return result;
}
