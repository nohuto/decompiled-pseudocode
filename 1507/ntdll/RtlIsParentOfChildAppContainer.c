/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x180047DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerSidType @ 0x18004AA20 (RtlGetAppContainerSidType.c)
 */

BOOLEAN __cdecl RtlIsParentOfChildAppContainer(PSID ParentAppContainerSid, PSID ChildAppContainerSid)
{
  unsigned int v5; // r8d
  _DWORD *v6; // rdx
  signed __int64 v7; // rbx
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+40h] [rbp+18h] BYREF

  if ( RtlGetAppContainerSidType(ParentAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ParentAppContainerSidType
    && RtlGetAppContainerSidType(ChildAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ChildAppContainerSidType )
  {
    v5 = 1;
    v6 = (char *)ChildAppContainerSid + 12;
    v7 = (_BYTE *)ParentAppContainerSid - (_BYTE *)ChildAppContainerSid;
    while ( *(_DWORD *)((char *)v6 + v7) == *v6 )
    {
      ++v5;
      ++v6;
      if ( v5 >= 8 )
        return 1;
    }
  }
  return 0;
}
