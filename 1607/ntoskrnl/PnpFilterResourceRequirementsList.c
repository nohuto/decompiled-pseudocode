/*
 * XREFs of PnpFilterResourceRequirementsList @ 0x140558924
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x14050D06C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopQueryDeviceResources @ 0x14050EDDC (IopQueryDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x1400B0050 (RtlCmDecodeMemIoResource.c)
 *     RtlIoDecodeMemIoResource @ 0x14013DA78 (RtlIoDecodeMemIoResource.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpCmResourcesToIoResources @ 0x140557F1C (PnpCmResourcesToIoResources.c)
 */

__int64 __fastcall PnpFilterResourceRequirementsList(_DWORD *Src, unsigned int *a2, char **a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 Vector; // r12
  int v8; // r13d
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // r15
  unsigned __int64 v11; // rdi
  __int64 v12; // r10
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 i; // r9
  unsigned __int8 v16; // al
  unsigned int v17; // r8d
  int v18; // edx
  _DWORD *v19; // r14
  _DWORD *v20; // rax
  int v21; // r8d
  _DWORD *v22; // rcx
  int v23; // edx
  __int64 v24; // r10
  struct _IO_RESOURCE_DESCRIPTOR *v25; // r9
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rax
  int v28; // r11d
  unsigned int v29; // ecx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v30; // r13
  unsigned int v31; // r10d
  unsigned __int64 v32; // r15
  unsigned int v33; // eax
  struct _IO_RESOURCE_DESCRIPTOR *v34; // rdi
  int ShareDisposition; // eax
  unsigned __int64 v36; // r9
  int v37; // edx
  unsigned __int8 v38; // cl
  int v39; // r8d
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // r11
  unsigned __int64 v42; // r13
  unsigned __int64 Length; // rax
  unsigned __int64 v44; // rcx
  bool v45; // zf
  UCHAR Type; // cl
  struct _IO_RESOURCE_DESCRIPTOR *m; // rdi
  __int64 LowPart; // rax
  int v49; // ecx
  int v50; // eax
  unsigned int v51; // r14d
  unsigned int *v52; // rax
  unsigned int *v53; // rdi
  unsigned int *v54; // rax
  unsigned int v55; // eax
  int v56; // r11d
  _DWORD *v57; // r9
  _DWORD *v58; // rcx
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r8
  __int16 v61; // ax
  _DWORD *v62; // rcx
  _DWORD *v63; // r10
  ULONGLONG v64; // rax
  ULONGLONG v65; // rax
  struct _IO_RESOURCE_DESCRIPTOR *j; // rax
  struct _IO_RESOURCE_DESCRIPTOR *k; // rax
  unsigned int v69; // [rsp+28h] [rbp-79h]
  int v70; // [rsp+2Ch] [rbp-75h]
  int v71; // [rsp+30h] [rbp-71h]
  int v72; // [rsp+34h] [rbp-6Dh]
  __int16 v73; // [rsp+3Ch] [rbp-65h]
  unsigned int v74; // [rsp+40h] [rbp-61h]
  unsigned int v75; // [rsp+44h] [rbp-5Dh]
  int v76; // [rsp+48h] [rbp-59h]
  int v77; // [rsp+4Ch] [rbp-55h]
  unsigned __int64 Start; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+60h] [rbp-41h] BYREF
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v81; // [rsp+68h] [rbp-39h]
  unsigned __int64 Alignment; // [rsp+70h] [rbp-31h] BYREF
  unsigned __int64 v83; // [rsp+78h] [rbp-29h]
  int v84; // [rsp+80h] [rbp-21h]
  int v85; // [rsp+84h] [rbp-1Dh]
  int v86; // [rsp+88h] [rbp-19h]
  _DWORD *v87; // [rsp+90h] [rbp-11h]
  ULONGLONG v88; // [rsp+98h] [rbp-9h]
  _DWORD *v89; // [rsp+A0h] [rbp-1h]
  __int64 v90; // [rsp+A8h] [rbp+7h]
  unsigned int *v91; // [rsp+B0h] [rbp+Fh]
  int v92; // [rsp+108h] [rbp+67h]

  v4 = 0;
  v87 = 0LL;
  Vector = (unsigned __int64)a2;
  v70 = 0;
  *a3 = 0LL;
  v8 = 0;
  *a4 = 0;
  if ( !Src || !Src[7] )
  {
    if ( a2 && *a2 )
      *a3 = PnpCmResourcesToIoResources((__int64)Src, a2, 1);
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)*Src, 0x75737050u);
  v89 = PoolWithTag;
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, (unsigned int)*Src);
  if ( !Vector || !*(_DWORD *)Vector )
    goto LABEL_152;
  v11 = Vector + 4;
  v12 = *(unsigned int *)Vector;
  v91 = (unsigned int *)(Vector + 4);
  v13 = Vector + 4;
  do
  {
    v14 = *(_DWORD *)(v13 + 12);
    v13 += 16LL;
    v8 += v14;
    if ( v14 )
    {
      for ( i = v14; i; --i )
      {
        v16 = *(_BYTE *)v13;
        v17 = 0;
        if ( *(_BYTE *)v13 == 5 )
        {
          v17 = *(_DWORD *)(v13 + 4);
        }
        else if ( (v16 <= 0x7Fu || *(_BYTE *)v13 > 0x81u) && (unsigned __int8)(v16 - 1) <= 6u )
        {
          goto LABEL_12;
        }
        --v8;
LABEL_12:
        v13 += v17 + 20LL;
      }
    }
    --v12;
  }
  while ( v12 );
  v71 = v8;
  if ( !v8 )
  {
LABEL_152:
    *a3 = (char *)v10;
    return 0LL;
  }
  v18 = v10[7];
  v19 = v10 + 8;
  v20 = v10 + 8;
  v77 = 0;
  v21 = 0;
  while ( --v18 >= 0 )
  {
    v22 = v20 + 2;
    v20 += 8 * (unsigned int)v20[1] + 2;
    if ( v22 < v20 )
    {
      do
      {
        if ( !*((_BYTE *)v22 + 1) )
          ++v21;
        *((_BYTE *)v22 + 3) = 0;
        v22 += 8;
      }
      while ( v22 < v20 );
      v77 = v21;
    }
  }
  v86 = v10[7] - 1;
  v23 = v86;
  v76 = v86;
  if ( v86 >= 0 )
  {
    while ( 2 )
    {
      v73 = *(_WORD *)v19;
      if ( *(_WORD *)v19 == 0xFFFF )
        v73 = 1;
      v24 = (unsigned int)v19[1];
      v25 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
      *(_WORD *)v19 = 0;
      v26 = (unsigned __int64)&v19[8 * v24 + 2];
      v90 = v24;
      v83 = v26;
      if ( v19 + 2 == (_DWORD *)v26 )
      {
        *(_WORD *)v19 = -1;
        --v10[7];
        goto LABEL_79;
      }
      v27 = v11;
      v28 = 1;
      v29 = 0;
      Alignment = v11;
      v92 = 1;
      v75 = 0;
      if ( *(_DWORD *)Vector )
      {
        do
        {
          v30 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(v27 + 16);
          v31 = 0;
          v81 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(v27 + 16);
          v74 = 0;
          if ( *(_DWORD *)(v27 + 12) )
          {
            v32 = Alignment;
            do
            {
              if ( v30->Type == 5 )
              {
                LowPart = v30->u.Generic.Start.LowPart;
              }
              else
              {
                if ( v30->Type != 129 && (unsigned __int8)(v30->Type - 1) <= 6u )
                {
                  v33 = 0;
                  v69 = 0;
                  while ( 1 )
                  {
                    v34 = v25;
                    if ( (unsigned __int64)v25 >= v26 )
                      goto LABEL_66;
                    LOBYTE(Vector) = v30->Type;
                    v72 = Vector;
                    while ( 1 )
                    {
                      if ( v34->Type != (_BYTE)Vector || v34->Spare1 )
                        goto LABEL_40;
                      ShareDisposition = v30->ShareDisposition;
                      v36 = 1LL;
                      v37 = v34->ShareDisposition;
                      v38 = v30->ShareDisposition - 1;
                      Alignment = 1LL;
                      v39 = ShareDisposition;
                      v40 = 1LL;
                      if ( v38 > 2u )
                        v39 = v37;
                      v41 = 1LL;
                      v84 = v39;
                      if ( (unsigned __int8)(v37 - 1) > 2u )
                        v37 = (unsigned __int8)v39;
                      v85 = v37;
                      switch ( (unsigned __int8)Vector )
                      {
                        case 1u:
                          goto LABEL_97;
                        case 2u:
                          Vector = v30->u.Interrupt.Vector;
                          Start = Vector;
                          v42 = (unsigned int)Vector;
LABEL_50:
                          Length = v34->u.Port.Length;
                          v44 = v34->u.Port.Alignment;
                          MinimumAddress = Length;
                          MaximumAddress = v44;
                          break;
                        case 3u:
LABEL_97:
                          v64 = RtlCmDecodeMemIoResource(v30, &Start);
                          Vector = Start;
                          v88 = v64;
                          v42 = v64 + Start - 1;
                          v65 = RtlIoDecodeMemIoResource(v34, &Alignment, &MinimumAddress, &MaximumAddress);
                          v41 = Alignment;
                          v40 = v65;
                          Length = MinimumAddress;
                          v44 = MaximumAddress;
                          LOBYTE(v39) = v84;
                          LOBYTE(v37) = v85;
                          v36 = v88;
                          break;
                        case 4u:
                          v42 = v30->u.Generic.Start.LowPart;
                          Vector = (unsigned int)v42;
                          Start = v42;
                          goto LABEL_50;
                        case 6u:
                          Vector = v30->u.Generic.Start.LowPart;
                          v36 = v30->u.Interrupt.Vector;
                          Length = v34->u.Port.Alignment;
                          v44 = v34->u.Port.MinimumAddress.LowPart;
                          v40 = v34->u.Port.Length;
                          v42 = (unsigned int)(v36 + Vector - 1);
                          Start = Vector;
                          MinimumAddress = Length;
                          MaximumAddress = v44;
                          break;
                        case 7u:
                          goto LABEL_97;
                        default:
                          Length = 0LL;
                          MinimumAddress = 0LL;
                          Vector = 0LL;
                          Start = 0LL;
                          v44 = 0LL;
                          MaximumAddress = 0LL;
                          v42 = 0LL;
                          break;
                      }
                      if ( v69 )
                      {
                        v92 = 0;
                        if ( v44 >= v42
                          && (_BYTE)v39 == (_BYTE)v37
                          && Length <= Vector
                          && v40 >= v36
                          && ((v41 - 1) & Vector) == 0 )
                        {
                          switch ( (unsigned __int8)v72 )
                          {
                            case 1u:
                              goto LABEL_126;
                            case 2u:
                              goto LABEL_136;
                            case 3u:
                              goto LABEL_126;
                            case 4u:
LABEL_136:
                              v34->u.Port.Length = Vector;
                              v34->u.Port.Alignment = v42;
                              break;
                            case 6u:
                              v34->u.Port.Alignment = Vector;
                              v34->u.Port.MinimumAddress.LowPart = v40 + Vector - 1;
                              break;
                            case 7u:
LABEL_126:
                              v34->u.Port.MinimumAddress.QuadPart = Vector;
                              v34->u.Port.MaximumAddress.QuadPart = Vector + v40 - 1;
                              break;
                          }
                          ++*(_WORD *)v19;
                          v25 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                          v45 = (v34->Option & 8) == 0;
                          v30 = v81;
                          v34->Spare1 = 0x80;
                          v34->Flags = v30->Flags;
                          if ( !v45 )
                          {
                            for ( j = v34 - 1; j >= v25; --j )
                            {
                              j->Type = 0;
                              --v19[1];
                              if ( j->Option != 8 )
                                break;
                            }
                          }
                          v26 = v83;
                          v34->Option = 1;
                          while ( (unsigned __int64)++v34 < v26 && (v34->Option & 8) != 0 )
                          {
                            v34->Type = 0;
                            --v19[1];
                          }
                          v28 = 0;
LABEL_42:
                          v33 = v69;
                          goto LABEL_66;
                        }
                        goto LABEL_99;
                      }
                      if ( Length == Vector && (_BYTE)v39 == (_BYTE)v37 && v44 >= v42 && v40 >= v36 )
                        break;
LABEL_99:
                      v26 = v83;
                      v30 = v81;
                      LODWORD(Vector) = v72;
LABEL_40:
                      if ( (unsigned __int64)++v34 >= v26 )
                      {
                        v28 = v92;
                        v25 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                        goto LABEL_42;
                      }
                    }
                    v28 = v92;
                    v25 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                    if ( v44 != v42 )
                      v28 = 0;
                    ++*(_WORD *)v19;
                    v45 = (v34->Option & 8) == 0;
                    v92 = v28;
                    v34->Spare1 = 0x80;
                    if ( !v45 )
                    {
                      for ( k = v34 - 1; k >= v25; --k )
                      {
                        k->Type = 0;
                        --v19[1];
                        if ( k->Option != 8 )
                          break;
                      }
                    }
                    v30 = v81;
                    Type = v34->Type;
                    v34->Option = 1;
                    v34->Flags = v30->Flags;
                    if ( ((Type - 1) & 0xF9) != 0 || Type == 5 )
                    {
                      if ( Type == 6 )
                      {
                        v34->u.Port.Alignment = Vector;
                        v34->u.Port.MinimumAddress.LowPart = v40 + Vector - 1;
                      }
                    }
                    else
                    {
                      v34->u.Port.MinimumAddress.QuadPart = Vector;
                      v34->u.Port.Alignment = 1;
                      v34->u.Port.MaximumAddress.QuadPart = Vector + v40 - 1;
                    }
                    v26 = v83;
                    for ( m = v34 + 1; (unsigned __int64)m < v26 && (m->Option & 8) != 0; ++m )
                    {
                      m->Type = 0;
                      --v19[1];
                    }
                    v33 = 1;
LABEL_66:
                    v69 = ++v33;
                    if ( v33 >= 2 )
                    {
                      v31 = v74;
                      break;
                    }
                  }
                }
                LowPart = 0LL;
              }
              ++v31;
              v30 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v30 + LowPart + 20);
              v74 = v31;
              v81 = v30;
            }
            while ( v31 < *(_DWORD *)(v32 + 12) );
            Vector = (unsigned __int64)a2;
            v29 = v75;
          }
          ++v29;
          v27 = (unsigned __int64)v30;
          Alignment = (unsigned __int64)v30;
          v75 = v29;
        }
        while ( v29 < *(_DWORD *)Vector );
        v10 = v89;
        v11 = Vector + 4;
        v8 = v71;
        v23 = v76;
        LODWORD(v24) = v90;
      }
      if ( *(_WORD *)v19 == (_WORD)v8 )
      {
        v49 = v19[1];
        if ( v49 != v8 && (v49 != v8 + 1 || *((_BYTE *)v19 + 9) != 0x80) )
        {
          v70 += v49;
          *(_WORD *)v19 = v73;
          goto LABEL_78;
        }
        if ( !v87 )
        {
          v70 += v49;
          v87 = v19;
          *(_WORD *)v19 = v73;
          if ( v28 )
            *a4 = 1;
          goto LABEL_78;
        }
      }
      *(_WORD *)v19 = -1;
      --v10[7];
LABEL_78:
      v19[1] = v24;
      v19 = (_DWORD *)v26;
LABEL_79:
      v76 = --v23;
      if ( v23 >= 0 )
        continue;
      break;
    }
    v21 = v77;
  }
  v50 = v10[7];
  if ( v50 )
  {
    v51 = 32 * (v70 - v21) + 8 * (v50 - 1 + 4 * (v50 - 1) + 9);
    v52 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v51, 0x75737050u);
    v53 = v52;
    if ( v52 )
    {
      memset(v52, 0, v51);
      v54 = v91;
      *v53 = v51;
      v53[1] = *v54;
      v53[2] = a2[2];
      v53[3] = v10[3];
      v55 = v10[7];
      if ( v55 > 1 )
        *a4 = 0;
      v56 = v86;
      v57 = v53 + 8;
      v53[7] = v55;
      if ( v56 >= 0 )
      {
        v58 = v10 + 8;
        do
        {
          v59 = (unsigned __int64)(v58 + 2);
          v60 = (unsigned __int64)&v58[8 * v58[1] + 2];
          if ( *(_WORD *)v58 != 0xFFFF )
          {
            *(_WORD *)v57 = *(_WORD *)v58;
            v61 = *((_WORD *)v58 + 1);
            v62 = v57 + 2;
            *((_WORD *)v57 + 1) = v61;
            v63 = v57 + 2;
            if ( *(_BYTE *)(v59 + 1) == 0x80 )
            {
              *v53 -= 32;
            }
            else
            {
              *(_WORD *)v62 = -32767;
              *(_DWORD *)((char *)v57 + 10) = 3;
              *((_WORD *)v57 + 7) = 0;
              v57[4] = 1;
              v62 = v57 + 10;
            }
            while ( v59 < v60 )
            {
              if ( *(_BYTE *)(v59 + 1) )
              {
                *(_OWORD *)v62 = *(_OWORD *)v59;
                *((_OWORD *)v62 + 1) = *(_OWORD *)(v59 + 16);
                v62 += 8;
              }
              v59 += 32LL;
            }
            v57[1] = ((char *)v62 - (char *)v57 - 8) >> 5;
            v57 = v62;
            v63[2] = 1;
          }
          --v56;
          v58 = (_DWORD *)v60;
        }
        while ( v56 >= 0 );
      }
      *a3 = (char *)v53;
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    v4 = -1073741670;
  }
  else
  {
    *a3 = PnpCmResourcesToIoResources(0xFFFFLL, (unsigned int *)Vector, 1);
  }
  ExFreePoolWithTag(v10, 0);
  return v4;
}
