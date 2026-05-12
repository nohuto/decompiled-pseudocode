/*
 * XREFs of PortPassThroughExValidateNormalizedRequest @ 0x1C0058EE8
 * Callers:
 *     PortPassThroughExValidate @ 0x1C003CEDC (PortPassThroughExValidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughExValidateNormalizedRequest(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned int v9; // ecx
  unsigned __int8 v10; // al
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // dl
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  bool v17; // cc
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  char v21; // al
  struct _UNICODE_STRING v22; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *KeyHandle; // [rsp+70h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(unsigned int *)(v5 + 16);
  v7 = *(unsigned int *)(v5 + 8);
  if ( *(_BYTE *)(a1 + 56) == 72 )
  {
    RtlInitUnicodeString(&v22, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &v22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
      return 3221225659LL;
    ZwClose(KeyHandle);
  }
  v9 = *(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 24);
  v10 = *(_BYTE *)(a1 + 17);
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 28);
    if ( v11 < v9 )
      return 3221225485LL;
    v9 = v11 + v10;
    if ( v9 > (unsigned int)v6 || v9 > (unsigned int)v7 )
      return 3221225485LL;
  }
  v12 = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)v12 )
  {
    if ( !*(_QWORD *)(a1 + 40) )
      return 3221225485LL;
  }
  v13 = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)v13 )
  {
    if ( !*(_QWORD *)(a1 + 48) )
      return 3221225485LL;
  }
  v14 = *(_BYTE *)(a1 + 18);
  if ( v14 == 2 && ((_DWORD)v13 || (_DWORD)v12 || *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 40)) )
    return 3221225485LL;
  if ( (!v14 || v14 == 3) && !(_DWORD)v12 )
    return 3221225485LL;
  if ( ((v14 - 1) & 0xFD) == 0 && !(_DWORD)v13
    || !v14 && ((_DWORD)v13 || *(_QWORD *)(a1 + 48))
    || v14 == 1 && ((_DWORD)v12 || *(_QWORD *)(a1 + 40)) )
  {
    return 3221225485LL;
  }
  if ( a3 )
    goto LABEL_50;
  if ( !v14 )
  {
    if ( !(_DWORD)v12 )
      return 3221225485LL;
    v15 = *(_QWORD *)(a1 + 40);
    if ( v15 < v9 )
      return 3221225485LL;
    v16 = v15 + v12;
LABEL_34:
    v17 = v16 <= v6;
    goto LABEL_35;
  }
  if ( v14 != 1 )
  {
    if ( v14 != 3 )
      goto LABEL_50;
    if ( !(_DWORD)v12 )
      return 3221225485LL;
    v19 = *(_QWORD *)(a1 + 40);
    if ( v19 < v9 )
      return 3221225485LL;
    if ( v19 + v12 > v6 )
      return 3221225485LL;
    if ( v19 + v12 > v7 )
      return 3221225485LL;
    if ( !(_DWORD)v13 )
      return 3221225485LL;
    v20 = *(_QWORD *)(a1 + 48);
    if ( v20 < (unsigned int)(v12 + *(_DWORD *)(a1 + 40)) )
      return 3221225485LL;
    v16 = v20 + v13;
    if ( v20 + v13 > v7 )
      return 3221225485LL;
    goto LABEL_34;
  }
  if ( !(_DWORD)v13 )
    return 3221225485LL;
  v18 = *(_QWORD *)(a1 + 48);
  if ( v18 < v9 )
    return 3221225485LL;
  v17 = v18 + v13 <= v7;
LABEL_35:
  if ( !v17 )
    return 3221225485LL;
LABEL_50:
  if ( (unsigned int)(*(_DWORD *)(a1 + 20) - 1) > 0x1A5DF )
    return 3221225485LL;
  v21 = *(_BYTE *)(a1 + 56);
  if ( v21 == 24 || (unsigned __int8)(v21 - 57) <= 1u )
    return 3221225488LL;
  else
    return 0LL;
}
