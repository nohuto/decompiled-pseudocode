/*
 * XREFs of IrqArbpAssignIrqFromLinkNode @ 0x1C0080A68
 * Callers:
 *     IrqArbpFindSuitableRangePci @ 0x1C006C928 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     IcGetPossibleInput @ 0x1C006BDE8 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C006C6E4 (IcIsInputValid.c)
 *     LinkNodeGetPossibleResources @ 0x1C00801D8 (LinkNodeGetPossibleResources.c)
 *     IrqArbIrqFromGsiv @ 0x1C0080848 (IrqArbIrqFromGsiv.c)
 */

__int64 __fastcall IrqArbpAssignIrqFromLinkNode(__int64 a1, _QWORD *a2, __int64 a3)
{
  int PossibleResources; // eax
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  int v8; // ebx
  int v9; // eax
  char v10; // r12
  unsigned __int16 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // r15
  unsigned int v14; // ebp
  int v15; // eax
  unsigned __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v21 = a1;
  P = 0LL;
  PossibleResources = LinkNodeGetPossibleResources(a3, &P, &v21);
  v5 = P;
  v6 = PossibleResources;
  if ( PossibleResources >= 0 )
  {
    v7 = *((_DWORD *)P + 4);
    v8 = 0;
    if ( v7 )
    {
      v9 = (unsigned __int8)IrqArbPciAlternativeRotation;
      v10 = v21;
      v11 = PciExclusionMask;
      LODWORD(P) = (unsigned __int8)IrqArbPciAlternativeRotation;
      while ( 1 )
      {
        v12 = (v8 + v9) % v7;
        v13 = 5 * v12;
        v14 = v5[5 * (unsigned int)v12 + 7];
        if ( v14 >= 0x10 || (v15 = v11, !_bittest(&v15, v14)) )
        {
          if ( (int)IcGetPossibleInput(v14, v12, &v21) < 0 || v10 == (_BYTE)v21 )
          {
            v16 = (unsigned int)v5[v13 + 7];
            if ( v16 >= a2[2] && v16 <= a2[3] )
              break;
          }
        }
        if ( ++v8 >= v7 )
          goto LABEL_15;
        v9 = (int)P;
      }
      if ( IcIsInputValid(v14) )
      {
        v18 = (unsigned int)IrqArbIrqFromGsiv(v17);
        v6 = 0;
        v19 = a2[5];
        *a2 = v18;
        a2[1] = v18;
        *(_QWORD *)(v19 + 16) = 1LL;
      }
      else
      {
        v6 = -1073741823;
      }
    }
    else
    {
LABEL_15:
      v6 = -1073741275;
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
