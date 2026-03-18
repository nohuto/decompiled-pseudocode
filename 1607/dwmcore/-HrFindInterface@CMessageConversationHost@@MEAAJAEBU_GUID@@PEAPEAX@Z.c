/*
 * XREFs of ?HrFindInterface@CMessageConversationHost@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011BA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMessageConversationHost::HrFindInterface(
        CMessageConversationHost *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v4 )
    {
      *a3 = this;
      return 0LL;
    }
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data4;
    if ( !v5 )
    {
      if ( this )
        v6 = (char *)this + 16;
      else
        v6 = 0LL;
      *a3 = v6;
      return 0LL;
    }
    *a3 = 0LL;
    return 2147500034LL;
  }
  return result;
}
