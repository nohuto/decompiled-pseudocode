/*
 * XREFs of ACPIProcessorGetInitialApicId @ 0x1C0082CB4
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C000A650 (ACPIProcessorStartDevice.c)
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x1C00039EC (AMLIGetNSObjectType.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIProcessorGetInitialApicId(__int64 a1, _DWORD *a2)
{
  int v3; // ebp
  char v5; // di
  __int64 v6; // rdx
  PVOID v7; // rdx
  __int64 v8; // rcx
  const char *v9; // rax
  const char *v10; // rdx
  char *v11; // r11
  char v12; // r8
  unsigned int v13; // r14d
  char *v14; // r10
  char *v15; // r15
  char *v16; // rdx
  unsigned __int8 v17; // cl
  char *v18; // r9
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // [rsp+90h] [rbp+8h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  P = 0LL;
  *a2 = -1;
  v3 = *(_DWORD *)(a1 + 196);
  v5 = 1;
  v26 = 0;
  if ( (int)ACPIGet((__int64 *)a1, 1413565791, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v26) >= 0 )
  {
    v7 = P;
  }
  else
  {
    v6 = *((_QWORD *)AcpiInformation + 4);
    if ( !v6 )
      return 3221225473LL;
    v7 = (PVOID)(v6 + 44);
    v5 = 0;
    P = v7;
    v26 = *(_DWORD *)(*((_QWORD *)AcpiInformation + 4) + 4LL) - 44;
  }
  if ( !v7 )
    return 3221225473LL;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = (const char *)qword_1C0090C20;
  v10 = (const char *)qword_1C0090C20;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v9 = *(const char **)(a1 + 560);
    if ( (v8 & 0x400000000000LL) != 0 )
      v10 = *(const char **)(a1 + 568);
  }
  WPP_RECORDER_SF_Dqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0xBu,
    (__int64)&WPP_2a74c23e51f033d915f3b15bc307c942_Traceguids,
    v3,
    a1,
    v9,
    v10);
  v11 = (char *)P;
  v12 = 0;
  v13 = IrqLibGicVersion;
  v14 = (char *)P + v26;
  v15 = (char *)P + 2;
  while ( 1 )
  {
    v16 = v11;
    if ( v15 <= v14 )
    {
      do
      {
        v17 = v16[1];
        if ( v17 < 2u )
          break;
        v18 = &v16[v17];
        if ( v18 > v14 )
          break;
        v19 = *v16;
        if ( *v16 || v17 < 8u )
        {
          if ( v19 == 9 && v17 >= 0x10u )
          {
            if ( (unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 712)) == 6
              && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0
              && *(_DWORD *)(v24 + 12) == v3
              || v5 && v12 )
            {
              goto LABEL_41;
            }
          }
          else if ( v19 == 11
                 && v17 >= 0x28u
                 && (v13 < 3 || v17 >= 0x4Cu)
                 && (((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 712)) == 6
                   && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0
                   || (unsigned int)AMLIGetNSObjectType(v25) == 12)
                  && *(_DWORD *)(v24 + 8) == v3
                  || v5 && v12) )
          {
            if ( v13 < 3 )
LABEL_41:
              v22 = *(_DWORD *)(v24 + 4);
            else
              v22 = (*(_QWORD *)(v24 + 68) >> 8) & 0xFF000000 | *(_DWORD *)(v24 + 68) & 0xFFFFFF;
LABEL_20:
            *a2 = v22;
            break;
          }
        }
        else if ( ((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 712)) == 12
                || (unsigned int)AMLIGetNSObjectType(v21) == 6 && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0)
               && *(unsigned __int8 *)(v20 + 2) == v3
               || v5 && v12 )
        {
          v22 = *(unsigned __int8 *)(v20 + 3);
          goto LABEL_20;
        }
        v16 = v18;
      }
      while ( v18 + 2 <= v14 );
    }
    if ( *a2 != -1 )
      break;
    if ( !v5 )
      goto LABEL_24;
    if ( v12 )
      break;
    v12 = 1;
  }
  if ( v5 )
    ExFreePoolWithTag(v11, 0);
LABEL_24:
  result = 3221225473LL;
  if ( *a2 != -1 )
    return 0LL;
  return result;
}
