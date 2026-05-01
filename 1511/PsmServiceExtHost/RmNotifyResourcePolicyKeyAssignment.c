/*
 * XREFs of RmNotifyResourcePolicyKeyAssignment @ 0x1800283D4
 * Callers:
 *     ?AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x180026598 (-AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetail.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RmNotifyResourcePolicyKeyAssignment(PCWSTR SourceString, int a2)
{
  _DWORD *v3; // rbx
  __int64 v4; // rdi
  LONG result; // eax
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  v3 = &unk_1800710A8;
  v4 = 4LL;
  do
  {
    RtlInitUnicodeString(&String2, *((PCWSTR *)v3 - 1));
    result = RtlCompareUnicodeString(&DestinationString, &String2, 1u);
    if ( !result )
      *v3 = a2;
    v3 += 4;
    --v4;
  }
  while ( v4 );
  return result;
}
