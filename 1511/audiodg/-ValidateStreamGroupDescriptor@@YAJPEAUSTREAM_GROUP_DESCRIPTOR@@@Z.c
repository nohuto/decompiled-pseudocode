/*
 * XREFs of ?ValidateStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140002494
 * Callers:
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140004310 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateStreamGroupDescriptor(struct STREAM_GROUP_DESCRIPTOR *a1)
{
  unsigned int v2; // ecx
  _WORD *v3; // rdx
  unsigned int v4; // edx
  _WORD *v5; // rax

  if ( *(_DWORD *)a1 > 2u )
    return (unsigned int)-2147024809;
  v2 = 0;
  if ( !*((_DWORD *)a1 + 3) )
  {
    if ( *((_DWORD *)a1 + 19) )
      return (unsigned int)-2147024809;
  }
  if ( *(_DWORD *)a1 == 2 && (*((_DWORD *)a1 + 19) || *((_QWORD *)a1 + 2)) )
    return (unsigned int)-2147024809;
  v3 = (_WORD *)*((_QWORD *)a1 + 2);
  if ( v3 )
  {
    if ( *((_DWORD *)a1 + 3) < 0x12u || *v3 == 0xFFFE && *((_DWORD *)a1 + 3) < 0x28u )
      return (unsigned int)-2147024809;
  }
  v4 = *((_DWORD *)a1 + 9);
  if ( v4 < 0x12 )
    return (unsigned int)-2147024809;
  v5 = (_WORD *)*((_QWORD *)a1 + 5);
  if ( v4 < 0x28 && *v5 == 0xFFFE )
    return (unsigned int)-2147024809;
  return v2;
}
