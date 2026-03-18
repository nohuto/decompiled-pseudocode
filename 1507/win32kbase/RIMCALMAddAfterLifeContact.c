/*
 * XREFs of RIMCALMAddAfterLifeContact @ 0x1C00C8F70
 * Callers:
 *     RIMRemoveContactFromActiveList @ 0x1C00D1C4C (RIMRemoveContactFromActiveList.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     RIMCALMPurgeContacts @ 0x1C0072214 (RIMCALMPurgeContacts.c)
 *     WPP_RECORDER_SF_d @ 0x1C00722DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C00C4768 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00C6E5C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall RIMCALMAddAfterLifeContact(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned int v5; // r14d
  _DWORD *v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rdi
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  BOOL v12; // ebx
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+30h] [rbp-28h]

  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v5 = v4 - *(_DWORD *)(a2 + 2348);
  v16 = *(_DWORD *)(a2 + 2348);
  WPP_RECORDER_SF_ddd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4u,
    0xAu,
    (__int64)&WPP_6d580f25f81f898f33a23dea95b38970_Traceguids,
    v4 - v16,
    v16,
    v4);
  if ( v5 > 0x3E8 || *(_QWORD *)(a2 + 2368) > 0x3D090uLL || !*(_DWORD *)(a2 + 2276) && !*(_DWORD *)(a2 + 2280) )
    return 0LL;
  v6 = Win32AllocPoolZInit(0x30uLL);
  v8 = v6;
  if ( !v6 )
    return 0LL;
  v6[5] = v5;
  v6[6] = *(_DWORD *)a2;
  v6[7] = v4;
  *(_QWORD *)v6 = *(_QWORD *)(a2 + 2276);
  LODWORD(v17) = v6[1];
  LODWORD(v14) = *v6;
  WPP_RECORDER_SF_dd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v7,
    4u,
    0xBu,
    (__int64)&WPP_6d580f25f81f898f33a23dea95b38970_Traceguids,
    v14,
    v17);
  v10 = v8 + 8;
  v11 = *(_QWORD **)(a1 + 616);
  *v10 = a1 + 608;
  v10[1] = v11;
  if ( *v11 != a1 + 608 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(a1 + 616) = v10;
  v12 = ++*(_DWORD *)(a1 + 628) > 0x32u;
  LODWORD(v15) = *(_DWORD *)(a1 + 628);
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v9,
    4u,
    0xCu,
    (__int64)&WPP_6d580f25f81f898f33a23dea95b38970_Traceguids,
    v15);
  if ( v12 )
    RIMCALMPurgeContacts(a1, 1);
  return 1LL;
}
