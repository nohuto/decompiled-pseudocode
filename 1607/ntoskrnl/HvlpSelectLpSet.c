/*
 * XREFs of HvlpSelectLpSet @ 0x1401BBCAC
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139CA4 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpComputeLpComparisonMetrics @ 0x1401BB384 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x1401BBA20 (HvlpLpComparison.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x1401BBB78 (HvlpQueryApicIdAndNumaNode.c)
 *     HviGetImplementationLimits @ 0x140231DEC (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectLpSet(unsigned int a1, __int64 a2)
{
  unsigned int v4; // ebp
  int v5; // r12d
  unsigned int v6; // esi
  unsigned __int16 *v7; // rbx
  int ApicIdAndNumaNode; // eax
  unsigned int v9; // r13d
  __int64 (__fastcall *v10)(_QWORD, _BYTE *, unsigned int *); // r9
  unsigned __int16 v11; // ax
  int v12; // ecx
  int ProximityNode; // ecx
  int v14; // r8d
  int v15; // r15d
  int v16; // r11d
  int v17; // ebx
  unsigned int v18; // esi
  int v19; // r13d
  unsigned int v20; // r10d
  __int64 v21; // rdx
  unsigned __int16 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  unsigned int v26; // eax
  _BYTE *v27; // rcx
  unsigned int v28; // ebx
  _BYTE *v29; // rsi
  unsigned int v30; // r9d
  unsigned int v31; // eax
  _BYTE *v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rcx
  _BYTE *v35; // rsi
  unsigned int v36; // ecx
  int v37; // r8d
  _DWORD *v38; // rdx
  __int64 i; // rcx
  _WORD v41[2]; // [rsp+20h] [rbp-78h] BYREF
  int v42; // [rsp+24h] [rbp-74h]
  _WORD v43[2]; // [rsp+28h] [rbp-70h] BYREF
  int v44; // [rsp+2Ch] [rbp-6Ch]
  int v45; // [rsp+30h] [rbp-68h]
  int v46; // [rsp+34h] [rbp-64h]
  int v47; // [rsp+38h] [rbp-60h]
  unsigned int v48; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v49; // [rsp+40h] [rbp-58h] BYREF
  int v50; // [rsp+44h] [rbp-54h]
  _BYTE v51[8]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v52[4]; // [rsp+50h] [rbp-48h] BYREF

  v48 = 0;
  if ( (HvlpRootFlags & 1) == 0 )
  {
    KeHypervisorNumprocSpecified = 0;
    KeRootProcSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
  }
  if ( (HvlpRootFlags & 0x400) != 0 )
  {
    KeRootProcSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
  }
  HviGetImplementationLimits(v52);
  v4 = 64;
  v5 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  if ( v52[0] < 0x40 )
    v4 = v52[0];
  if ( KeRootProcSpecified && KeRootProcSpecified < v4 )
    v4 = KeRootProcSpecified;
  v6 = 0;
  v50 = HalEnumerateProcessors((unsigned int)KeRegisteredProcessors);
  if ( a1 )
  {
    v7 = (unsigned __int16 *)(a2 + 10);
    do
    {
      *((_BYTE *)v7 - 10) = 1;
      ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(v6, v7 - 3, v41);
      v48 = ApicIdAndNumaNode;
      v9 = ApicIdAndNumaNode;
      if ( ApicIdAndNumaNode == -1073741275 )
      {
        v48 = 0;
        *((_BYTE *)v7 - 10) = 0;
      }
      else
      {
        if ( ApicIdAndNumaNode < 0 )
          return v9;
        v10 = (__int64 (__fastcall *)(_QWORD, _BYTE *, unsigned int *))HvlpQueryProximityId;
        v11 = v41[0];
        *(v7 - 1) = v41[0];
        if ( v10 )
        {
          v12 = v10(v11, v51, &v49);
          v11 = v41[0];
        }
        else
        {
          v12 = -1073741275;
        }
        if ( v12 >= 0 )
        {
          if ( HvlpQueryProximityNode )
          {
            ProximityNode = HvlpQueryProximityNode(v49, v43);
            v11 = v41[0];
          }
          else
          {
            ProximityNode = -1073741275;
          }
          if ( ProximityNode >= 0 )
            v11 = v43[0];
        }
        *v7 = v11;
        v7[1] = v11;
      }
      ++v6;
      v7 += 18;
    }
    while ( v6 < a1 );
  }
  v14 = KeMaximumProcessors;
  v15 = 1;
  v16 = KeBootprocSpecified;
  v17 = 1;
  v18 = KeNumprocSpecified;
  v19 = KeHypervisorNumprocSpecified;
  v44 = 1;
  *(_BYTE *)(a2 + 1) = 1;
  v42 = v14;
  v46 = v16;
  v47 = v18;
LABEL_27:
  v45 = v17;
  while ( 1 )
  {
    v20 = 0;
    if ( a1 )
    {
      v21 = a2;
      do
      {
        if ( *(_BYTE *)v21 )
        {
          if ( *(_BYTE *)(v21 + 1) )
            goto LABEL_56;
          v22 = *(_WORD *)(v21 + 8);
          if ( v22 >= (unsigned __int16)KeNumberNodes
            || (*(_BYTE *)(KeNodeBlock[v22] + 173) & 2) == 0
            || v15 == 512
            || v15 == v50
            || v14 && v15 == v14 )
          {
            goto LABEL_56;
          }
          if ( v16 && v15 == v16 || v18 && v20 >= v18 || v19 && v15 == v19 )
            goto LABEL_56;
          if ( v17 == v4 )
          {
            v23 = 0LL;
            do
            {
              if ( *(_WORD *)(a2 + 36 * v23 + 8) == v22 && *(_BYTE *)(a2 + 36 * v23 + 1) )
                break;
              v23 = (unsigned int)(v23 + 1);
            }
            while ( (unsigned int)v23 < a1 );
            if ( (_DWORD)v23 == a1 )
              goto LABEL_56;
          }
          if ( v44 == KeRegisteredProcessors )
          {
            v24 = a2 + 1;
            v25 = 0;
            do
            {
              if ( (v5 & *(_DWORD *)(v21 + 4)) == (v5 & *(_DWORD *)(v24 + 3)) && *(_BYTE *)v24 )
                break;
              ++v25;
              v24 += 36LL;
            }
            while ( v25 < a1 );
            if ( v25 == a1 )
LABEL_56:
              *(_BYTE *)v21 = 0;
          }
        }
        v14 = v42;
        ++v20;
        v21 += 36LL;
      }
      while ( v20 < a1 );
    }
    v26 = 0;
    if ( a1 )
    {
      v27 = (_BYTE *)a2;
      do
      {
        if ( *v27 )
          break;
        ++v26;
        v27 += 36;
      }
      while ( v26 < a1 );
    }
    if ( v26 == a1 )
      return v48;
    v28 = 0;
    if ( a1 )
    {
      v29 = (_BYTE *)a2;
      do
      {
        if ( *v29 )
          HvlpComputeLpComparisonMetrics(a1, a2, v28);
        ++v28;
        v29 += 36;
      }
      while ( v28 < a1 );
      v19 = KeHypervisorNumprocSpecified;
      v42 = KeMaximumProcessors;
      v47 = KeNumprocSpecified;
      v46 = KeBootprocSpecified;
    }
    v30 = -1;
    v31 = 0;
    if ( a1 )
    {
      v32 = (_BYTE *)a2;
      while ( !*v32 )
      {
        ++v31;
        v32 += 36;
        if ( v31 >= a1 )
          goto LABEL_75;
      }
      v30 = v31;
    }
LABEL_75:
    v33 = v30 + 1;
    if ( (unsigned int)v33 < a1 )
    {
      v34 = 9 * v33;
      v35 = (_BYTE *)(a2 + 36 * v33);
      do
      {
        if ( *v35 && (unsigned int)HvlpLpComparison(v34, a2, v33, v30) == -1 )
          v30 = v33;
        LODWORD(v33) = v33 + 1;
        v35 += 36;
      }
      while ( (unsigned int)v33 < a1 );
    }
    ++v15;
    v36 = 0;
    v37 = v5 & *(_DWORD *)(a2 + 36LL * v30 + 4);
    *(_BYTE *)(a2 + 36LL * v30 + 1) = 1;
    if ( a1 )
    {
      v38 = (_DWORD *)(a2 + 4);
      do
      {
        if ( v36 != v30 && *((_BYTE *)v38 - 3) && (v5 & *v38) == v37 )
          break;
        ++v36;
        v38 += 9;
      }
      while ( v36 < a1 );
    }
    if ( v36 == a1 )
      ++v44;
    for ( i = 0LL; (unsigned int)i < a1; i = (unsigned int)(i + 1) )
    {
      if ( (_DWORD)i != v30
        && *(_BYTE *)(a2 + 36 * i + 1)
        && *(_WORD *)(a2 + 36 * i + 8) == *(_WORD *)(a2 + 36LL * v30 + 8) )
      {
        break;
      }
    }
    v14 = v42;
    v16 = v46;
    v18 = v47;
    v17 = v45;
    if ( (_DWORD)i == a1 )
    {
      v17 = v45 + 1;
      goto LABEL_27;
    }
  }
}
