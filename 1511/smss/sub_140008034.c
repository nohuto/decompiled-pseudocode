/*
 * XREFs of sub_140008034 @ 0x140008034
 * Callers:
 *     sub_140007D9C @ 0x140007D9C (sub_140007D9C.c)
 *     sub_140008F84 @ 0x140008F84 (sub_140008F84.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140008034(int a1, _DWORD *a2, int *a3)
{
  NTSTATUS result; // eax
  int *v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 i; // rcx
  unsigned int v12; // ecx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-40h] BYREF
  _DWORD KeyValueInformation[2]; // [rsp+48h] [rbp-38h] BYREF
  UCHAR Buffer[4]; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned __int8 v18; // [rsp+5Ch] [rbp-24h]
  _DWORD v19[4]; // [rsp+60h] [rbp-20h]

  *(_DWORD *)&ValueName.Length = 3014700;
  ValueName.Buffer = L"PagefileHybridPriority";
  result = NtQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformationAlign64,
             KeyValueInformation,
             0x24u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( KeyValueInformation[0] != 3 || KeyValueInformation[1] != 24 )
      return -1073741275;
    v7 = &v17;
    v8 = 20LL;
    do
    {
      *(_BYTE *)v7 ^= Buffer[0];
      v7 = (int *)((char *)v7 + 1);
      --v8;
    }
    while ( v8 );
    if ( v17 != 3 )
      return -1073741701;
    if ( v18 > 1u )
      return -1073741701;
    v9 = *(_DWORD *)Buffer;
    *(_DWORD *)Buffer = 0;
    *(_DWORD *)Buffer = RtlComputeCrc32(0, Buffer, 0x18u);
    if ( *(_DWORD *)Buffer != v9 )
      return -1073741701;
    v10 = 0LL;
    if ( v18 )
    {
      while ( LOWORD(v19[2 * v10 + 1]) && LOWORD(v19[2 * v10 + 1]) < 0xFFu )
      {
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= v18 )
          goto LABEL_13;
      }
      return -1073741701;
    }
LABEL_13:
    for ( i = 0LL; (unsigned int)i < v18; i = (unsigned int)(i + 1) )
    {
      if ( v19[2 * i] == a1 )
        break;
    }
    if ( (unsigned int)i < v18 )
    {
      v12 = v19[2 * i + 1];
      *a2 = (unsigned __int16)v12;
      if ( a3 )
        *a3 = HIWORD(v12) & 1;
      return 0;
    }
    else
    {
      return -1073741275;
    }
  }
  return result;
}
