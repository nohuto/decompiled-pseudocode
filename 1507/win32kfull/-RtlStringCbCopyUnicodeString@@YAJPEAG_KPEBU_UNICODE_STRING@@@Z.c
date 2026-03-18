/*
 * XREFs of ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C000F468
 * Callers:
 *     _GetPointerDeviceInfoProperties @ 0x1C000F038 (_GetPointerDeviceInfoProperties.c)
 *     UserGetHipDeviceInfo @ 0x1C01CCE40 (UserGetHipDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyUnicodeString(char *a1, unsigned __int64 a2, const struct _UNICODE_STRING *a3)
{
  unsigned __int64 v3; // rdx
  int v4; // r9d
  USHORT Length; // ax
  PWSTR v7; // r11
  unsigned __int64 v8; // r8
  USHORT MaximumLength; // r10
  PWSTR Buffer; // rbx
  unsigned __int64 v11; // r8
  signed __int64 v12; // r11

  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
  {
    Length = a3->Length;
    v7 = 0LL;
    v8 = 0LL;
    v4 = 0;
    if ( (Length & 1) != 0
      || (MaximumLength = a3->MaximumLength, (MaximumLength & 1) != 0)
      || Length > MaximumLength
      || MaximumLength == 0xFFFF )
    {
      v4 = -1073741811;
    }
    else
    {
      Buffer = a3->Buffer;
      if ( !Buffer && (Length || MaximumLength) )
      {
        v4 = -1073741811;
      }
      else
      {
        v7 = Buffer;
        v8 = (unsigned __int64)Length >> 1;
      }
      if ( v4 >= 0 )
      {
        v4 = 0;
        if ( !v3 )
          goto LABEL_18;
        v11 = v8 - v3;
        v12 = (char *)v7 - a1;
        do
        {
          if ( !(v11 + v3) )
            break;
          *(_WORD *)a1 = *(_WORD *)&a1[v12];
          a1 += 2;
          --v3;
        }
        while ( v3 );
        if ( !v3 )
        {
LABEL_18:
          a1 -= 2;
          v4 = -2147483643;
        }
      }
    }
    *(_WORD *)a1 = 0;
  }
  return (unsigned int)v4;
}
