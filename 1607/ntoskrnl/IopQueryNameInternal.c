/*
 * XREFs of IopQueryNameInternal @ 0x1404ECAA0
 * Callers:
 *     IoQueryFileDosDeviceName @ 0x1404EB03C (IoQueryFileDosDeviceName.c)
 *     IopQueryName @ 0x1404ECA68 (IopQueryName.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     IoVolumeDeviceToDosName @ 0x1404EB0DC (IoVolumeDeviceToDosName.c)
 *     IopGetFileInformation @ 0x1404ECF60 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x1404ED0B8 (IopQueryXxxInformation.c)
 */

__int64 __fastcall IopQueryNameInternal(
        __int64 a1,
        __int64 a2,
        char a3,
        UNICODE_STRING *a4,
        SIZE_T NumberOfBytes,
        unsigned int *a6,
        char a7)
{
  __int64 v8; // rdx
  UNICODE_STRING *v9; // r13
  char v10; // al
  char v11; // r15
  unsigned int v12; // ebx
  UNICODE_STRING *PoolWithTagPriority; // rax
  UNICODE_STRING *v15; // rdi
  _DWORD *v16; // rcx
  NTSTATUS v17; // ecx
  unsigned int v18; // esi
  NTSTATUS v19; // eax
  bool v20; // r12
  UNICODE_STRING *v21; // rcx
  UNICODE_STRING *v22; // r14
  char v23; // r8
  unsigned int Length; // eax
  _DWORD *v25; // r10
  char v26; // dl
  char v27; // al
  char v28; // r12
  unsigned int *v29; // r15
  char *v30; // rdi
  unsigned int FileInformation; // eax
  unsigned int v32; // ebx
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // esi
  int Buffer_high; // [rsp+48h] [rbp-60h]
  char *v38; // [rsp+58h] [rbp-50h]
  _BYTE v39[72]; // [rsp+60h] [rbp-48h] BYREF
  char v41; // [rsp+B8h] [rbp+10h]

  v8 = a1;
  v9 = 0LL;
  v10 = 0;
  v41 = 0;
  v11 = 0;
  v12 = NumberOfBytes;
  if ( (unsigned int)NumberOfBytes < 0x10 )
  {
    v12 = 16;
    v10 = 1;
    v41 = 1;
  }
  if ( a7 == 1 )
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTagPriority(
                                                PagedPool,
                                                v12,
                                                0x20206F49u,
                                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v12, 0x20206F49u);
    v9 = PoolWithTagPriority;
    if ( !PoolWithTagPriority )
      return 3221225626LL;
    *(_QWORD *)&PoolWithTagPriority->Length = 0LL;
    PoolWithTagPriority->Buffer = 0LL;
    v15 = PoolWithTagPriority;
    v8 = a1;
  }
  else
  {
    v15 = (UNICODE_STRING *)v39;
    if ( !v10 )
      v15 = a4;
  }
  v16 = *(_DWORD **)(v8 + 8);
  if ( !a3 )
    goto LABEL_20;
  if ( (v16[13] & 0x10) == 0 )
  {
    v17 = IoVolumeDeviceToDosName(v16, v15);
    v18 = v15->Length + 18;
    LODWORD(NumberOfBytes) = v18;
    v8 = a1;
LABEL_17:
    if ( v17 >= 0 )
    {
      v11 = 1;
      goto LABEL_21;
    }
    goto LABEL_18;
  }
  LODWORD(NumberOfBytes) = 20;
  if ( v12 >= 0x14 )
  {
    v17 = 0;
    *(_DWORD *)&v15->Length = 131074;
    v15[1].Length = 92;
    v15->Buffer = &v15[1].Length;
    v18 = NumberOfBytes;
    goto LABEL_17;
  }
LABEL_18:
  v16 = *(_DWORD **)(v8 + 8);
LABEL_20:
  v19 = ObQueryNameStringMode((char *)v16, (__int64)v15, v12, &NumberOfBytes, 0);
  v18 = NumberOfBytes;
  v17 = v19;
LABEL_21:
  if ( v17 >= 0 )
  {
    v20 = 0;
    if ( !v11 )
      v20 = v15->Length == 0;
  }
  else
  {
    if ( v17 != -1073741820 )
      return (unsigned int)v17;
    v20 = 0;
  }
  v21 = a4;
  v22 = a4 + 1;
  v23 = a3;
  if ( a3 && v11 )
  {
    if ( v12 >= v18 )
    {
      Length = v15->Length;
    }
    else if ( v12 >= 0x10 )
    {
      Length = v12 - 16;
    }
    else
    {
      Length = 0;
    }
    memmove(&a4[1], v15->Buffer, Length);
    v25 = (_DWORD *)a1;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 0x10) != 0 )
    {
      v18 = NumberOfBytes;
      v21 = a4;
      v26 = a7;
      v27 = v41;
      v23 = a3;
      goto LABEL_43;
    }
    ExFreePoolWithTag(v15->Buffer, 0);
    v18 = NumberOfBytes;
  }
  else
  {
    v26 = a7;
    v27 = v41;
    if ( a7 != 1 || v41 || v18 > v12 )
      goto LABEL_42;
    memmove(a4, v15, v18);
  }
  v23 = a3;
  v27 = v41;
  v26 = a7;
  v21 = a4;
LABEL_42:
  v25 = (_DWORD *)a1;
LABEL_43:
  if ( v20 )
  {
    v18 += 2;
    LODWORD(NumberOfBytes) = v18;
  }
  v28 = 0;
  if ( v27 || v18 > v12 )
  {
    v29 = a6;
    *a6 = v18;
    v28 = 1;
  }
  else
  {
    v21->Buffer = &v22->Length;
    v22 = (UNICODE_STRING *)((char *)v22 + v15->Length);
    v29 = a6;
    v27 = v41;
  }
  if ( v26 == 1 )
  {
    v30 = (char *)v9;
    Buffer_high = (int)v9;
  }
  else if ( v28 )
  {
    v30 = v39;
    if ( !v27 )
      v30 = (char *)v21;
    Buffer_high = (int)v30;
  }
  else
  {
    v30 = (char *)&v22[-1].Buffer + 4;
    Buffer_high = HIDWORD(v22[-1].Buffer);
  }
  if ( (v26 != 1 || v23) && (v25[20] & 2) != 0 )
    FileInformation = IopGetFileInformation(v25, (__int64)&NumberOfBytes);
  else
    FileInformation = IopQueryXxxInformation(v25, (__int64)v30, (__int64)&NumberOfBytes, 1);
  v32 = FileInformation;
  if ( (FileInformation & 0xC0000000) != 0xC0000000 )
  {
    v35 = NumberOfBytes;
    if ( (unsigned int)NumberOfBytes < 4 )
      v35 = 4;
    LODWORD(NumberOfBytes) = v35;
    goto LABEL_68;
  }
  v33 = FileInformation + 1073741822;
  if ( v32 + 1073741822 <= 0xE )
  {
    v34 = 18435;
    if ( _bittest(&v34, v33) )
    {
      LODWORD(NumberOfBytes) = 4;
      *(_DWORD *)v30 = 0;
      *((_WORD *)v30 + 2) = 92;
      v32 = 0;
      v35 = NumberOfBytes;
LABEL_68:
      if ( v28 )
      {
        *v29 += *(_DWORD *)v30;
        v32 = -2147483643;
        if ( v41 )
          v32 = -1073741820;
      }
      else
      {
        v36 = v35 - 4;
        if ( (unsigned int)(v35 - 4) > *(_DWORD *)v30 )
          v36 = *(_DWORD *)v30;
        LODWORD(NumberOfBytes) = (_DWORD)v22 + *(_DWORD *)v30 - (_DWORD)a4;
        if ( *((_WORD *)v30 + 2) == 92 )
        {
          if ( a7 == 1 )
            memmove(v22, v30 + 4, v36);
          else
            *(_DWORD *)v30 = Buffer_high;
          v38 = (char *)v22 + v36;
          *(_WORD *)v38 = 0;
          LODWORD(NumberOfBytes) = NumberOfBytes + 2;
          *v29 = NumberOfBytes;
          a4->Length = (_WORD)v38 - (_WORD)a4 - 16;
          a4->MaximumLength = (_WORD)v38 - (_WORD)a4 - 14;
        }
        else
        {
          v32 = -1073741767;
        }
      }
    }
  }
  if ( a7 == 1 )
    ExFreePoolWithTag(v9, 0);
  return v32;
}
