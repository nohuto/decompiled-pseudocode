/*
 * XREFs of Concat @ 0x1C005E940
 * Callers:
 *     <none>
 * Callees:
 *     ValidateTarget @ 0x1C001476C (ValidateTarget.c)
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     WriteObject @ 0x1C00191F0 (WriteObject.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     IsCompatableDSDTRevision @ 0x1C002563C (IsCompatableDSDTRevision.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     ConvertToInteger @ 0x1C0027AE4 (ConvertToInteger.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     CheckAndPromoteAliasedObjects @ 0x1C005BF48 (CheckAndPromoteAliasedObjects.c)
 *     GetObjectTypeName @ 0x1C005C1C8 (GetObjectTypeName.c)
 *     ConvertToBuffer @ 0x1C0060D94 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0060F58 (ConvertToString.c)
 */

__int64 __fastcall Concat(__int64 a1, __int64 a2)
{
  char v4; // r15
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int16 *v7; // rcx
  __int64 v8; // rbp
  __int16 v9; // ax
  _BYTE *v10; // rsi
  int v11; // eax
  __int16 v12; // cx
  __int64 v13; // r11
  const void *ObjectTypeName; // rbx
  const void *v15; // rdx
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  __int16 v23; // ax
  bool v24; // al
  _QWORD *v25; // rcx
  const void *v26; // rdx
  void *v27; // rcx
  void *v28; // rcx
  _BYTE v30[48]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+98h] [rbp+10h] BYREF

  v4 = 0;
  memset(v30, 0, 0x28uLL);
  v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"DD");
  if ( v5 )
    return v5;
  v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 0x87u, (__int64)&v31);
  if ( v5 )
    return v5;
  v7 = *(__int16 **)(a2 + 80);
  if ( v7[41] != 128 )
    CheckAndPromoteAliasedObjects(v7, v6, v31);
  v8 = *(_QWORD *)(a2 + 80);
  v9 = *(_WORD *)(v8 + 2);
  v10 = (_BYTE *)(v8 + 40);
  if ( v9 != *(_WORD *)(v8 + 42) )
  {
    switch ( v9 )
    {
      case 1:
        v11 = ConvertToInteger(v8 + 40, (__int64)v30);
        break;
      case 2:
        v11 = ConvertToString(v8 + 40, 0LL, v30);
        break;
      case 3:
        v11 = ConvertToBuffer(v8 + 40, v30);
        break;
      default:
LABEL_13:
        v10 = v30;
        v4 = 1;
        goto LABEL_14;
    }
    v5 = v11;
    if ( v11 >= 0 )
      goto LABEL_13;
  }
LABEL_14:
  v12 = *(_WORD *)(v8 + 2);
  if ( v12 == *((_WORD *)v10 + 1) )
  {
    v16 = *(_QWORD *)(a2 + 88);
    if ( v12 == 1 )
    {
      *(_WORD *)(v16 + 2) = 3;
      v17 = !IsCompatableDSDTRevision();
      v18 = *(_QWORD *)(a2 + 88);
      if ( v17 )
        *(_DWORD *)(v18 + 24) = 8;
      else
        *(_DWORD *)(v18 + 24) = 16;
    }
    else
    {
      *(_WORD *)(v16 + 2) = v12;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v8 + 24) + *((_DWORD *)v10 + 6);
      v19 = *(_QWORD *)(a2 + 88);
      if ( *(_WORD *)(v19 + 2) == 2 )
        --*(_DWORD *)(v19 + 24);
    }
    v20 = *(_QWORD *)(a2 + 88);
    v21 = 1381258056;
    if ( *(_WORD *)(v20 + 2) != 2 )
      v21 = 1179992648;
    v22 = HeapAlloc(gpheapGlobal, v21, *(_DWORD *)(v20 + 24));
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v22;
    if ( v22 )
    {
      v23 = *(_WORD *)(v8 + 2);
      if ( v23 == 1 )
      {
        v24 = IsCompatableDSDTRevision();
        v25 = *(_QWORD **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v24 )
        {
          *v25 = *(_QWORD *)(v8 + 16);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 8LL) = *((_QWORD *)v10 + 2);
        }
        else
        {
          *(_DWORD *)v25 = *(_DWORD *)(v8 + 16);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 4LL) = *((_DWORD *)v10 + 4);
        }
      }
      else
      {
        v26 = *(const void **)(v8 + 32);
        v27 = *(void **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v23 == 2 )
        {
          memmove(v27, v26, (unsigned int)(*(_DWORD *)(v8 + 24) - 1));
          v28 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) - 1LL + *(unsigned int *)(v8 + 24));
        }
        else
        {
          memmove(v27, v26, *(unsigned int *)(v8 + 24));
          v28 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + *(unsigned int *)(v8 + 24));
        }
        memmove(v28, *((const void **)v10 + 4), *((unsigned int *)v10 + 6));
      }
      if ( !v5 )
        v5 = WriteObject(a1, v31, *(_QWORD *)(a2 + 88));
    }
    else
    {
      v5 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(27, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v5 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL));
    v15 = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v13 + 2));
    PrintDebugMessage(26, v15, ObjectTypeName, 0LL, 0LL);
  }
  if ( v4 )
    FreeDataBuffs((__int64)v30, 1u);
  return v5;
}
