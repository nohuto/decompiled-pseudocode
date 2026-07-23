/*
 * XREFs of WmipGetGuidPropertiesFromGuidEntry @ 0x14069E20C
 * Callers:
 *     WmipEnumerateGuids @ 0x14069E10C (WmipEnumerateGuids.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WmipGetGuidPropertiesFromGuidEntry(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 2LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  v2 = *(__int64 **)(a2 + 56);
  if ( v2 != (__int64 *)(a2 + 56) )
  {
    while ( 1 )
    {
      if ( (v2[2] & 0x8000) != 0 )
        *(_DWORD *)(a1 + 16) = 3;
      if ( (v2[2] & 0x6000) != 0 )
        *(_BYTE *)(a1 + 32) = 1;
      result = v2[2] & 0x81000;
      if ( (_DWORD)result == 528384 )
        break;
      v2 = (__int64 *)*v2;
      if ( v2 == (__int64 *)(a2 + 56) )
        goto LABEL_10;
    }
    *(_DWORD *)(a1 + 16) = 0;
  }
LABEL_10:
  if ( *(_QWORD *)(a2 + 112) == -1LL )
  {
    if ( *(_QWORD *)(a2 + 120) )
    {
      *(_BYTE *)(a1 + 32) = 1;
      *(_DWORD *)(a1 + 20) = *(unsigned __int16 *)(a2 + 120);
      *(_DWORD *)(a1 + 24) = *(unsigned __int8 *)(a2 + 122);
      result = *(unsigned int *)(a2 + 124);
      *(_DWORD *)(a1 + 28) = result;
    }
  }
  return result;
}
