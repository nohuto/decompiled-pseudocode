/*
 * XREFs of SaveNodeDistanceInformation @ 0x1407BC5F4
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void SaveNodeDistanceInformation()
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
  unsigned __int64 *v28; // rax
  unsigned __int64 *v29; // rdx
  __int64 v30; // rdi
  __int64 *v31; // r14
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // r10
  int v35; // r9d
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // r11
  __int64 *v39; // rdi
  _WORD *v40; // r13
  unsigned __int16 v41; // ax
  __int64 v42; // r15
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int16 v46; // ax
  unsigned int v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // r14d
  __int64 v51; // rsi
  char v52; // r9
  unsigned int v53; // r8d
  _DWORD *v54; // r13
  int v55; // r11d
  __int64 *v56; // r10
  unsigned __int16 v57; // r12
  __int64 v58; // rdi
  unsigned int v59; // r15d
  int v60; // eax
  __int64 *v61; // r9
  __int64 v62; // r15
  int v63; // r10d
  __int64 v64; // r14
  __int64 v65; // rdi
  unsigned __int16 v66; // ax
  __int64 v67; // rsi
  _DWORD *v68; // r15
  __int64 *v69; // r11
  int v70; // edx
  __int64 v71; // rax
  unsigned __int16 v72; // cx
  int v73; // eax
  unsigned int DataSize; // [rsp+48h] [rbp-79h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-71h] BYREF
  PVOID P; // [rsp+58h] [rbp-69h]
  PVOID Data; // [rsp+60h] [rbp-61h]
  int v78; // [rsp+68h] [rbp-59h]
  _DWORD *v79; // [rsp+70h] [rbp-51h]
  __int64 v80; // [rsp+78h] [rbp-49h]
  ULONG ResultLength; // [rsp+80h] [rbp-41h] BYREF
  UNICODE_STRING ValueName; // [rsp+88h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-19h] BYREF
  char KeyValueInformation[4]; // [rsp+D8h] [rbp+17h] BYREF
  int v86; // [rsp+DCh] [rbp+1Bh]
  int v87; // [rsp+E0h] [rbp+1Fh]
  unsigned int v88; // [rsp+E4h] [rbp+23h]

  v0 = (unsigned __int16)KeNumberNodes;
  KeyHandle = (HANDLE)-1LL;
  v78 = (unsigned __int16)KeNumberNodes;
  v1 = 0;
  if ( !KeNumberNodes )
    goto LABEL_8;
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
  if ( v1 != 1 )
  {
LABEL_8:
    v4 = (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (int)v4, 0x616D754Eu);
    P = PoolWithTag;
    v6 = (unsigned __int64 *)PoolWithTag;
    if ( PoolWithTag )
    {
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
      if ( v14 )
      {
        *v14 = v1;
        v16 = v1 + 1;
        v17 = &v14[v16];
        v18 = 1;
        v79 = v17;
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
            v28 = v6;
            do
            {
              if ( *v28 != -1LL )
                *v28 >>= 16;
              ++v28;
              --v26;
            }
            while ( v26 );
          }
        }
        if ( v4 )
        {
          v29 = v6;
          v30 = v4;
          do
          {
            if ( *v29 == -1LL )
              *v29 = 0xFFFFLL;
            else
              *v29 = (0x8000000000000000uLL / v24 * *v29) >> 48;
            ++v29;
            --v30;
          }
          while ( v30 );
        }
        if ( (_DWORD)v0 )
        {
          v31 = KeNodeBlock;
          v80 = v0;
          v32 = v0;
          v33 = v0;
          do
          {
            v34 = *v31;
            if ( *(_WORD *)(*v31 + 146) == *(_WORD *)(*v31 + 148) )
            {
              v35 = 0;
              v36 = 0;
              if ( v1 )
              {
                while ( 1 )
                {
                  v37 = (unsigned int)(v36 + 1);
                  if ( v15[v37] == *(_DWORD *)(v34 + 160) )
                    break;
                  ++v36;
                  if ( (unsigned int)v37 >= v1 )
                    goto LABEL_52;
                }
                v35 = v1 * v36;
              }
LABEL_52:
              v38 = v32;
              v39 = KeNodeBlock;
              v40 = P;
              do
              {
                v41 = *(_WORD *)(*v39 + 146);
                if ( v41 == *(_WORD *)(*v39 + 148) )
                {
                  v42 = v41 + (unsigned int)v0 * *(unsigned __int16 *)(v34 + 146);
                  if ( *(_QWORD *)&v40[4 * v42] == 0xFFFFLL )
                  {
                    v17 = v79;
                  }
                  else
                  {
                    v43 = 0;
                    if ( v1 )
                    {
                      do
                      {
                        v44 = (unsigned int)(v43 + 1);
                        if ( *((_DWORD *)Data + v44) == *(_DWORD *)(*v39 + 160) )
                          break;
                        ++v43;
                      }
                      while ( (unsigned int)v44 < v1 );
                      LODWORD(v0) = v78;
                      v40 = P;
                    }
                    v45 = (unsigned int)(v35 + v43);
                    v46 = v40[4 * v42];
                    v17 = v79;
                    *((_WORD *)v79 + v45) = v46;
                    if ( !v46 )
                      *((_WORD *)v17 + v45) = 2;
                  }
                }
                ++v39;
                --v38;
              }
              while ( v38 );
              v33 = v80;
              v15 = Data;
              v32 = (unsigned int)v0;
            }
            ++v31;
            v80 = --v33;
          }
          while ( v33 );
          LODWORD(v16) = v1 + 1;
        }
        if ( v1 )
        {
          v47 = 0;
          v48 = v1;
          do
          {
            v49 = v47;
            v47 += v16;
            *((_WORD *)v17 + v49) = 0;
            --v48;
          }
          while ( v48 );
        }
        v50 = 10;
        RtlInitUnicodeString(&DestinationString, L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\NUMA");
        RtlInitUnicodeString(&ValueName, L"Variation Threshold");
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) < 0 )
        {
          v51 = -1LL;
          KeyHandle = (HANDLE)-1LL;
        }
        else
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x14u,
                 &ResultLength) >= 0
            && v86 == 4
            && v87 == 4 )
          {
            v50 = v88;
            if ( v88 - 1 > 0x31 )
              v50 = 10;
          }
          v51 = (__int64)KeyHandle;
        }
        v52 = 0;
        v53 = 0;
        if ( (_DWORD)v0 )
        {
          v54 = KeNodeDistance;
          v55 = 0;
          v56 = KeNodeBlock;
          v57 = KeNumberNodes;
          while ( 1 )
          {
            if ( *(_WORD *)(*v56 + 146) == *(_WORD *)(*v56 + 148) )
            {
              v58 = 0LL;
              while ( 1 )
              {
                if ( *(_WORD *)(KeNodeBlock[v58] + 146) == *(_WORD *)(KeNodeBlock[v58] + 148) && v53 != (_DWORD)v58 )
                {
                  v59 = *((_DWORD *)KeNodeDistance + (unsigned int)v58 + v53 * (unsigned __int16)KeNumberNodes);
                  v60 = *((_DWORD *)P + 2 * (unsigned int)(v55 + v58)) - v59;
                  if ( v60 < 0 )
                    v60 = v59 - *((_DWORD *)P + 2 * (unsigned int)(v55 + v58));
                  if ( 100 * v60 / v50 > v59 )
                    break;
                }
                v58 = (unsigned int)(v58 + 1);
                if ( (unsigned int)v58 >= (unsigned int)v0 )
                  goto LABEL_89;
              }
              v52 = 1;
LABEL_89:
              if ( v52 )
                break;
            }
            ++v53;
            v55 += v0;
            ++v56;
            if ( v53 >= (unsigned int)v0 )
              goto LABEL_105;
          }
          if ( v51 != -1 )
          {
            RtlInitUnicodeString(&ValueName, L"Node Distance");
            ZwSetValueKey((HANDLE)v51, &ValueName, 0, 3u, Data, DataSize);
            v57 = KeNumberNodes;
            v54 = KeNodeDistance;
          }
          v61 = KeNodeBlock;
          v62 = (unsigned int)v0;
          v63 = 0;
          v64 = (unsigned int)v0;
          do
          {
            v65 = *v61;
            v66 = *(_WORD *)(*v61 + 148);
            if ( *(_WORD *)(*v61 + 146) != v66 )
              v65 = KeNodeBlock[v66];
            v67 = v62;
            v68 = P;
            v69 = KeNodeBlock;
            v70 = v63;
            do
            {
              v71 = *v69;
              v72 = *(_WORD *)(*v69 + 148);
              if ( *(_WORD *)(*v69 + 146) != v72 )
                v71 = KeNodeBlock[v72];
              v73 = *(unsigned __int16 *)(v71 + 146);
              if ( *(_WORD *)(v65 + 146) == (_WORD)v73 )
                v54[v70] = 0;
              else
                v54[v70] = v68[2 * v73 + 2 * (unsigned int)v0 * *(unsigned __int16 *)(v65 + 146)];
              ++v70;
              ++v69;
              --v67;
            }
            while ( v67 );
            v63 += v57;
            ++v61;
            v62 = (unsigned int)v0;
            --v64;
          }
          while ( v64 );
        }
      }
LABEL_105:
      ExFreePoolWithTag(P, 0);
      if ( Data )
        ExFreePoolWithTag(Data, 0);
    }
    if ( KeyHandle != (HANDLE)-1LL )
      ZwClose(KeyHandle);
  }
}
