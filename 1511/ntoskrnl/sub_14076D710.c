/*
 * XREFs of sub_14076D710 @ 0x14076D710
 * Callers:
 *     Phase1InitializationIoReady @ 0x140763CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void sub_14076D710()
{
  __int64 v0; // rbx
  unsigned int v1; // esi
  __int64 *v2; // rdx
  __int64 v3; // rdi
  unsigned int v4; // r14d
  PVOID PoolWithTag; // rax
  unsigned __int64 *v6; // r13
  int v7; // r8d
  unsigned int v8; // edi
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r11
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  _DWORD *v14; // rax
  _DWORD *v15; // r11
  __int64 v16; // r10
  _DWORD *v17; // r15
  unsigned int v18; // r8d
  __int64 *v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  _WORD *v23; // rdi
  unsigned __int64 v24; // rcx
  unsigned __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r8
  unsigned int v28; // r13d
  int v29; // eax
  _DWORD *v30; // rdx
  unsigned int v31; // r8d
  __int64 *v32; // r11
  unsigned int v33; // r9d
  int v34; // r15d
  __int64 *v35; // r14
  __int64 *v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // r10
  int v40; // r9d
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // r11
  __int64 *v44; // rdi
  _WORD *v45; // r13
  unsigned __int16 v46; // ax
  __int64 v47; // r15
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int16 v51; // ax
  unsigned int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // esi
  __int64 v56; // rdi
  char v57; // r10
  unsigned __int16 v58; // r12
  unsigned __int64 *v59; // rdx
  __int64 v60; // rdi
  unsigned __int64 *v61; // rax
  _DWORD *v62; // r13
  __int64 *v63; // r9
  __int64 v64; // r15
  int v65; // r10d
  __int64 v66; // r14
  __int64 v67; // rdi
  unsigned __int16 v68; // ax
  __int64 v69; // rsi
  _DWORD *v70; // r15
  __int64 *v71; // r11
  int v72; // edx
  __int64 v73; // rax
  unsigned __int16 v74; // cx
  int v75; // eax
  ULONG DataSize; // [rsp+48h] [rbp-79h]
  HANDLE Handle; // [rsp+50h] [rbp-71h] BYREF
  _DWORD *v78; // [rsp+58h] [rbp-69h]
  PVOID P; // [rsp+60h] [rbp-61h]
  PVOID Data; // [rsp+68h] [rbp-59h]
  __int64 v81; // [rsp+70h] [rbp-51h]
  _DWORD *v82; // [rsp+78h] [rbp-49h]
  UNICODE_STRING ValueName; // [rsp+80h] [rbp-41h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-19h] BYREF
  char KeyValueInformation[4]; // [rsp+D8h] [rbp+17h] BYREF
  int v88; // [rsp+DCh] [rbp+1Bh]
  int v89; // [rsp+E0h] [rbp+1Fh]
  unsigned int v90; // [rsp+E4h] [rbp+23h]

  v0 = (unsigned __int16)KeNumberNodes;
  Handle = (HANDLE)-1LL;
  LODWORD(v78) = (unsigned __int16)KeNumberNodes;
  v1 = 0;
  if ( KeNumberNodes )
  {
    v2 = KeNodeBlock;
    v3 = (unsigned __int16)KeNumberNodes;
    do
    {
      if ( *(_WORD *)(*v2 + 146) == *(_WORD *)(*v2 + 148) )
        ++v1;
      ++v2;
      --v3;
    }
    while ( v3 );
    if ( v1 == 1 )
      return;
  }
  v4 = (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (int)v4, 0x616D754Eu);
  P = PoolWithTag;
  v6 = (unsigned __int64 *)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_44;
  memmove(PoolWithTag, KiActualNodeCost, 8LL * (int)v4);
  if ( (_DWORD)v0 != 1 )
  {
    v7 = 0;
    v8 = 1;
    do
    {
      if ( v8 < (unsigned int)v0 )
      {
        v9 = v8 + v7 + (_DWORD)v0 - 1;
        v10 = v8 + v7;
        v11 = (unsigned int)v0 - v8;
        do
        {
          v12 = v6[v10];
          if ( v12 != -1LL )
          {
            v13 = (v6[v9] >> 1) + (v12 >> 1);
            v6[v10] = v13;
            v6[v9] = v13;
          }
          v10 = (unsigned int)(v10 + 1);
          v9 = (unsigned int)(v0 + v9);
          --v11;
        }
        while ( v11 );
      }
      ++v8;
      v7 += v0;
    }
    while ( v8 - 1 < (int)v0 - 1 );
  }
  DataSize = 2 * v1 * (v1 + 2) + 4;
  v14 = ExAllocatePoolWithTag(PagedPool, DataSize, 0x2020654Bu);
  Data = v14;
  v15 = v14;
  if ( !v14 )
    goto LABEL_42;
  *v14 = v1;
  v16 = v1 + 1;
  v17 = &v14[v16];
  v18 = 1;
  v82 = v17;
  if ( (_DWORD)v0 )
  {
    v19 = KeNodeBlock;
    v20 = v0;
    do
    {
      if ( *(_WORD *)(*v19 + 146) == *(_WORD *)(*v19 + 148) )
      {
        v21 = v18++;
        v14[v21] = *(_DWORD *)(*v19 + 160);
      }
      ++v19;
      --v20;
    }
    while ( v20 );
  }
  if ( v1 * v1 )
  {
    v22 = v1 * v1;
    v23 = &v14[v16];
    while ( v22 )
    {
      *v23++ = -1;
      --v22;
    }
  }
  v24 = 1LL;
  if ( v4 )
  {
    v25 = v6;
    v26 = v4;
    v27 = v4;
    do
    {
      if ( v24 < *v25 && *v25 != -1LL )
        v24 = *v25;
      ++v25;
      --v27;
    }
    while ( v27 );
    if ( v24 > 0x1000000000000LL )
    {
      v24 >>= 16;
      v61 = v6;
      do
      {
        if ( *v61 != -1LL )
          *v61 >>= 16;
        ++v61;
        --v26;
      }
      while ( v26 );
    }
  }
  if ( v4 )
  {
    v59 = v6;
    v60 = v4;
    do
    {
      if ( *v59 == -1LL )
        *v59 = 0xFFFFLL;
      else
        *v59 = (0x8000000000000000uLL / v24 * *v59) >> 48;
      ++v59;
      --v60;
    }
    while ( v60 );
  }
  if ( (_DWORD)v0 )
  {
    v36 = KeNodeBlock;
    v81 = v0;
    v37 = v0;
    v38 = v0;
    do
    {
      v39 = *v36;
      if ( *(_WORD *)(*v36 + 146) == *(_WORD *)(*v36 + 148) )
      {
        v40 = 0;
        v41 = 0;
        if ( v1 )
        {
          while ( 1 )
          {
            v42 = (unsigned int)(v41 + 1);
            if ( v15[v42] == *(_DWORD *)(v39 + 160) )
              break;
            ++v41;
            if ( (unsigned int)v42 >= v1 )
              goto LABEL_53;
          }
          v40 = v1 * v41;
        }
LABEL_53:
        v43 = v37;
        v44 = KeNodeBlock;
        v45 = P;
        do
        {
          v46 = *(_WORD *)(*v44 + 146);
          if ( v46 == *(_WORD *)(*v44 + 148) )
          {
            v47 = v46 + (unsigned int)v0 * *(unsigned __int16 *)(v39 + 146);
            if ( *(_QWORD *)&v45[4 * v47] == 0xFFFFLL )
            {
              v17 = v82;
            }
            else
            {
              v48 = 0;
              if ( v1 )
              {
                do
                {
                  v49 = (unsigned int)(v48 + 1);
                  if ( *((_DWORD *)Data + v49) == *(_DWORD *)(*v44 + 160) )
                    break;
                  ++v48;
                }
                while ( (unsigned int)v49 < v1 );
                LODWORD(v0) = (_DWORD)v78;
                v45 = P;
              }
              v50 = (unsigned int)(v40 + v48);
              v51 = v45[4 * v47];
              v17 = v82;
              *((_WORD *)v82 + v50) = v51;
              if ( !v51 )
                *((_WORD *)v17 + v50) = 2;
            }
          }
          ++v44;
          --v43;
        }
        while ( v43 );
        v38 = v81;
        v15 = Data;
        v37 = (unsigned int)v0;
      }
      ++v36;
      v81 = --v38;
    }
    while ( v38 );
    LODWORD(v16) = v1 + 1;
  }
  if ( v1 )
  {
    v52 = 0;
    v53 = v1;
    do
    {
      v54 = v52;
      v52 += v16;
      *((_WORD *)v17 + v54) = 0;
      --v53;
    }
    while ( v53 );
  }
  v55 = 10;
  RtlInitUnicodeString(&DestinationString, L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\NUMA");
  RtlInitUnicodeString(&ValueName, L"Variation Threshold");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) < 0 )
  {
    v56 = -1LL;
    Handle = (HANDLE)-1LL;
  }
  else
  {
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v88 == 4
      && v89 == 4 )
    {
      v55 = v90;
      if ( v90 - 1 > 0x31 )
        v55 = 10;
    }
    v56 = (__int64)Handle;
  }
  v57 = 0;
  v33 = 0;
  if ( !(_DWORD)v0 )
    goto LABEL_42;
  v30 = KeNodeDistance;
  v35 = KeNodeBlock;
  v34 = 0;
  v78 = KeNodeDistance;
  v58 = KeNumberNodes;
  while ( *(_WORD *)(*v35 + 146) != *(_WORD *)(*v35 + 148) )
  {
LABEL_41:
    ++v33;
    v34 += v0;
    ++v35;
    if ( v33 >= (unsigned int)v0 )
      goto LABEL_42;
  }
  v31 = 0;
  v32 = KeNodeBlock;
  while ( 1 )
  {
    if ( v33 == v31 || *(_WORD *)(*v32 + 146) != *(_WORD *)(*v32 + 148) )
      goto LABEL_38;
    v28 = v30[v31 + v33 * (unsigned __int16)KeNumberNodes];
    v29 = *((_DWORD *)P + 2 * v34 + 2 * v31) - v28;
    if ( v29 < 0 )
      v29 = v28 - *((_DWORD *)P + 2 * v34 + 2 * v31);
    if ( 100 * v29 / v55 > v28 )
      break;
    v30 = v78;
LABEL_38:
    ++v31;
    ++v32;
    if ( v31 >= (unsigned int)v0 )
      goto LABEL_39;
  }
  v57 = 1;
LABEL_39:
  if ( !v57 )
  {
    v30 = v78;
    goto LABEL_41;
  }
  if ( v56 == -1 )
  {
    v62 = v78;
  }
  else
  {
    RtlInitUnicodeString(&ValueName, L"Node Distance");
    ZwSetValueKey((HANDLE)v56, &ValueName, 0, 3u, Data, DataSize);
    v58 = KeNumberNodes;
    v62 = KeNodeDistance;
  }
  v63 = KeNodeBlock;
  v64 = (unsigned int)v0;
  v65 = 0;
  v66 = (unsigned int)v0;
  do
  {
    v67 = *v63;
    v68 = *(_WORD *)(*v63 + 148);
    if ( *(_WORD *)(*v63 + 146) != v68 )
      v67 = KeNodeBlock[v68];
    v69 = v64;
    v70 = P;
    v71 = KeNodeBlock;
    v72 = v65;
    do
    {
      v73 = *v71;
      v74 = *(_WORD *)(*v71 + 148);
      if ( *(_WORD *)(*v71 + 146) != v74 )
        v73 = KeNodeBlock[v74];
      v75 = *(unsigned __int16 *)(v73 + 146);
      if ( *(_WORD *)(v67 + 146) == (_WORD)v75 )
        v62[v72] = 0;
      else
        v62[v72] = v70[2 * v75 + 2 * (unsigned int)v0 * *(unsigned __int16 *)(v67 + 146)];
      ++v72;
      ++v71;
      --v69;
    }
    while ( v69 );
    v65 += v58;
    ++v63;
    v64 = (unsigned int)v0;
    --v66;
  }
  while ( v66 );
LABEL_42:
  ExFreePoolWithTag(P, 0);
  if ( Data )
    ExFreePoolWithTag(Data, 0);
LABEL_44:
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
}
