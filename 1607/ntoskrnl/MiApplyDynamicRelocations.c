/*
 * XREFs of MiApplyDynamicRelocations @ 0x1407AA654
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x1407AA494 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiApplyDynamicFixups @ 0x1407AA734 (MiApplyDynamicFixups.c)
 */

NTSTATUS __fastcall MiApplyDynamicRelocations(void *a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  ULONG Size[4]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v14[8]; // [rsp+30h] [rbp-88h] BYREF
  void *v15; // [rsp+38h] [rbp-80h]
  __int64 v16; // [rsp+40h] [rbp-78h]
  __int64 v17; // [rsp+48h] [rbp-70h]

  if ( (MiFlags & 0x100000) != 0 )
  {
    v15 = a1;
    v16 = a2;
    v17 = a3;
    return VslpEnterIumSecureMode(1, 211LL, 0LL, (__int64)v14);
  }
  else
  {
    v6 = RtlImageDirectoryEntryToData(a1, 1u, 0xAu, Size);
    if ( v6
      && Size[0] == *(_DWORD *)v6
      && *(_DWORD *)v6 >= 0xC8u
      && (v7 = v6[24]) != 0
      && (v8 = *(unsigned int *)(v7 + 4), v9 = v7 + 8, v10 = v8 + v9, v11 = v9, v9 != v8 + v9) )
    {
      while ( v11 >= v9 && v11 < v10 )
      {
        if ( *(_QWORD *)v11 == a2 )
          return MiApplyDynamicFixups(a1, v11, a3);
        v11 += *(unsigned int *)(v11 + 8) + 12LL;
        if ( v11 == v10 )
          return 0;
      }
      return -1073741701;
    }
    else
    {
      return 0;
    }
  }
}
