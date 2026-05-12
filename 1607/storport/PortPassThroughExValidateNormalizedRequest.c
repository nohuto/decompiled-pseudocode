/*
 * XREFs of PortPassThroughExValidateNormalizedRequest @ 0x1C0060654
 * Callers:
 *     PortPassThroughExValidate @ 0x1C004402C (PortPassThroughExValidate.c)
 * Callees:
 *     RtlULongAdd @ 0x1C00166B8 (RtlULongAdd.c)
 */

__int64 __fastcall PortPassThroughExValidateNormalizedRequest(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned int v9; // r8d
  unsigned __int8 v10; // al
  ULONG v11; // ecx
  ULONG v12; // edx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r9
  char v16; // dl
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  bool v19; // cc
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned int v22; // r10d
  unsigned __int64 v23; // rcx
  char v24; // al
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(unsigned int *)(v5 + 16);
  v7 = *(unsigned int *)(v5 + 8);
  if ( *(_BYTE *)(a1 + 56) == 72 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
      return 3221225659LL;
    ZwClose(KeyHandle);
  }
  v9 = *(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 24);
  v10 = *(_BYTE *)(a1 + 17);
  LODWORD(KeyHandle) = v9;
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 28);
    if ( v11 < v9 )
      return 3221225485LL;
    v12 = v10;
    v13 = v10 + v11;
    if ( v13 > (unsigned int)v6 || v13 > (unsigned int)v7 || RtlULongAdd(v11, v12, (ULONG *)&KeyHandle) < 0 )
      return 3221225485LL;
    v9 = (unsigned int)KeyHandle;
  }
  v14 = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)v14 && !*(_QWORD *)(a1 + 40) )
    return 3221225485LL;
  v15 = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)v15 )
  {
    if ( !*(_QWORD *)(a1 + 48) )
      return 3221225485LL;
  }
  v16 = *(_BYTE *)(a1 + 18);
  if ( v16 == 2 && ((_DWORD)v15 || (_DWORD)v14 || *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 40)) )
    return 3221225485LL;
  if ( (!v16 || v16 == 3) && !(_DWORD)v14 )
    return 3221225485LL;
  if ( ((v16 - 1) & 0xFD) == 0 && !(_DWORD)v15
    || !v16 && ((_DWORD)v15 || *(_QWORD *)(a1 + 48))
    || v16 == 1 && ((_DWORD)v14 || *(_QWORD *)(a1 + 40)) )
  {
    return 3221225485LL;
  }
  if ( a3 )
    goto LABEL_52;
  if ( !v16 )
  {
    if ( !(_DWORD)v14 )
      return 3221225485LL;
    v17 = *(_QWORD *)(a1 + 40);
    if ( v17 < v9 )
      return 3221225485LL;
    v18 = v17 + v14;
LABEL_36:
    v19 = v18 <= v6;
    goto LABEL_37;
  }
  if ( v16 != 1 )
  {
    if ( v16 != 3 )
      goto LABEL_52;
    if ( !(_DWORD)v14 )
      return 3221225485LL;
    v21 = *(_QWORD *)(a1 + 40);
    if ( v21 < v9 )
      return 3221225485LL;
    if ( v21 + v14 > v6 )
      return 3221225485LL;
    if ( v21 + v14 > v7 )
      return 3221225485LL;
    v22 = v14 + v21;
    if ( !(_DWORD)v15 )
      return 3221225485LL;
    v23 = *(_QWORD *)(a1 + 48);
    if ( v23 < v22 )
      return 3221225485LL;
    v18 = v15 + v23;
    if ( v18 > v7 )
      return 3221225485LL;
    goto LABEL_36;
  }
  if ( !(_DWORD)v15 )
    return 3221225485LL;
  v20 = *(_QWORD *)(a1 + 48);
  if ( v20 < v9 )
    return 3221225485LL;
  v19 = v20 + v15 <= v7;
LABEL_37:
  if ( !v19 )
    return 3221225485LL;
LABEL_52:
  if ( (unsigned int)(*(_DWORD *)(a1 + 20) - 1) > 0x1A5DF )
    return 3221225485LL;
  v24 = *(_BYTE *)(a1 + 56);
  if ( v24 == 24 || (unsigned __int8)(v24 - 57) <= 1u )
    return 3221225488LL;
  else
    return 0LL;
}
