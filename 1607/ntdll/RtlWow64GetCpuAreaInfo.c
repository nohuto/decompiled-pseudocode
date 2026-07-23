/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x180076520
 * Callers:
 *     RtlWow64GetCurrentCpuArea @ 0x1800764A0 (RtlWow64GetCurrentCpuArea.c)
 * Callees:
 *     RtlpGetContextFlagsLocation @ 0x1800765B4 (RtlpGetContextFlagsLocation.c)
 *     RtlpGetLegacyContextLength @ 0x1800765CC (RtlpGetLegacyContextLength.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, __int16 a2, __int64 a3)
{
  __int16 v3; // di
  unsigned int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 *v8; // r11
  unsigned int v9; // r10d
  __int64 ContextFlagsLocation; // rax
  __int64 v11; // r11
  __int64 result; // rax
  int v13; // r10d
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+38h] [rbp+10h] BYREF

  LOWORD(v15) = a2;
  *(_QWORD *)(a3 + 24) = a1;
  v3 = *(_WORD *)(a1 + 2);
  if ( v3 == 332 )
  {
    v5 = 0x10000;
LABEL_3:
    RtlpGetLegacyContextLength(v5, &v14, &v15);
    v6 = ~(v15 - 1) & (a1 + v15 + 3LL);
    v7 = v6 + v14 + 7LL;
    *v8 = v6;
    v8[1] = v7 & 0xFFFFFFFFFFFFFFF8uLL;
    ContextFlagsLocation = RtlpGetContextFlagsLocation(v6, v9);
    *(_QWORD *)(v11 + 16) = ContextFlagsLocation;
    result = 0LL;
    *(_DWORD *)(v11 + 32) = v13;
    *(_WORD *)(v11 + 36) = v3;
    return result;
  }
  if ( *(_WORD *)(a1 + 2) == 452 )
  {
    v5 = 0x200000;
    goto LABEL_3;
  }
  if ( *(unsigned __int16 *)(a1 + 2) == 34404 )
  {
    v5 = 0x100000;
    goto LABEL_3;
  }
  if ( *(unsigned __int16 *)(a1 + 2) == 43620 )
  {
    v5 = 0x400000;
    goto LABEL_3;
  }
  return 3221225485LL;
}
