/*
 * XREFs of CmpVerifyLogRecord @ 0x140605BF4
 * Callers:
 *     CmpRmReDoPhase @ 0x140605888 (CmpRmReDoPhase.c)
 * Callees:
 *     HvBufferCheckSum @ 0x14051A168 (HvBufferCheckSum.c)
 *     CmpVerifyCreateOrDeleteKeyLogRecord @ 0x140605B94 (CmpVerifyCreateOrDeleteKeyLogRecord.c)
 *     CmpVerifyRenameKeyLogRecord @ 0x140605CB4 (CmpVerifyRenameKeyLogRecord.c)
 *     CmpVerifySetOrDeleteValueLogRecord @ 0x140605CFC (CmpVerifySetOrDeleteValueLogRecord.c)
 *     CmpVerifySetSecurityDescriptorLogRecord @ 0x140605D64 (CmpVerifySetSecurityDescriptorLogRecord.c)
 */

__int64 __fastcall CmpVerifyLogRecord(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned __int16 v6; // ax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax

  if ( a2 < 0x30 )
    return 3222863920LL;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 > a2 )
    return 3222863920LL;
  if ( v4 < 0x30 )
    return 3222863920LL;
  if ( *(_DWORD *)a1 != (unsigned int)HvBufferCheckSum(a1, v4) )
    return 3222863920LL;
  v5 = *(_DWORD *)(a1 + 12);
  if ( v5 >= 0xB )
    return 3222863920LL;
  if ( v5 > 7 )
  {
    v8 = v5 - 8;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
      {
        result = CmpVerifyRenameKeyLogRecord(a1);
        goto LABEL_25;
      }
      if ( v9 != 1 )
        __fastfail(5u);
    }
    result = CmpVerifySetSecurityDescriptorLogRecord(a1);
LABEL_25:
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  if ( v5 == 7 )
  {
LABEL_12:
    if ( v4 < 0x38 )
      return 3222863920LL;
    v6 = *(_WORD *)(a1 + 32);
    if ( (v6 & 1) != 0 )
      return 3222863920LL;
    v7 = v6 + 56;
    if ( v7 < 0x38 || v4 < v7 )
      return 3222863920LL;
    return 0LL;
  }
  if ( v5 )
  {
    if ( v5 <= 2 )
    {
      result = CmpVerifyCreateOrDeleteKeyLogRecord(a1);
    }
    else
    {
      if ( v5 > 5 )
        goto LABEL_12;
      result = CmpVerifySetOrDeleteValueLogRecord(a1);
    }
    goto LABEL_25;
  }
  return 0LL;
}
