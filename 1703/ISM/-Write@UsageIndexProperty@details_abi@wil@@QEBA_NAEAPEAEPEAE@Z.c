/*
 * XREFs of ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18003E19C
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18003E9E4 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s_0 @ 0x18003CA8C (memcpy_s_0.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Write(
        wil::details_abi::UsageIndexProperty *this,
        char **a2,
        char *a3)
{
  char *v4; // rbx
  char *v7; // r14
  bool result; // al
  char *v9; // r8
  rsize_t v10; // r9
  rsize_t v11; // rdx
  rsize_t v12; // r9
  __int16 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a2;
  if ( *((_BYTE *)this + 2) == 1 )
  {
    v7 = v4 + 2;
    if ( v4 + 2 > a3 )
      return 0;
    v9 = (char *)&v13;
    v10 = 2LL;
    v13 = *((_WORD *)this + 2);
    v11 = 2LL;
  }
  else
  {
    if ( *((_BYTE *)this + 2) != 2 )
      goto LABEL_9;
    v7 = v4 + 4;
    if ( v4 + 4 > a3 )
      return 0;
    v11 = 4LL;
    v9 = (char *)this + 4;
    v10 = 4LL;
  }
  memcpy_s_0(v4, v11, v9, v10);
  v4 = v7;
LABEL_9:
  if ( !*(_WORD *)this )
  {
    if ( v4 + 2 > a3 )
      return 0;
    memcpy_s_0(v4, a3 - v4, (char *)this + 8, 2uLL);
    v4 += 2;
  }
  v12 = *((unsigned __int16 *)this + 4);
  if ( &v4[v12] > a3 )
    return 0;
  if ( *((_WORD *)this + 4) )
    memcpy_s_0(v4, a3 - v4, *((const void *const *)this + 3), v12);
  result = 1;
  *a2 = &v4[*((unsigned __int16 *)this + 4)];
  return result;
}
