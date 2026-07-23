/*
 * XREFs of HvpBuildMap @ 0x140610608
 * Callers:
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 * Callees:
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     HvpInitMap @ 0x1404C5FEC (HvpInitMap.c)
 *     HvpEnlistBinInMap @ 0x1404F73D0 (HvpEnlistBinInMap.c)
 *     HvpCleanMap @ 0x140610824 (HvpCleanMap.c)
 */

__int64 __fastcall HvpBuildMap(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // rdi
  _DWORD *v3; // rbx
  int inited; // eax
  int v6; // esi
  __int64 v8; // r12
  int v9; // r15d
  char *v10; // r13
  bool i; // cf
  unsigned int v12; // eax
  bool v13; // zf
  unsigned int v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // rax
  char *v17; // rcx

  v2 = *(_QWORD *)(BugCheckParameter2 + 56);
  v3 = (_DWORD *)a2;
  inited = HvpInitMap(BugCheckParameter2, a2);
  v6 = inited;
  if ( inited >= 0 )
  {
    v8 = *(unsigned int *)(BugCheckParameter2 + 1400);
    v9 = 0;
    v10 = (char *)v3 + v8;
    for ( i = v3 < (_DWORD *)((char *)v3 + v8); i; i = v17 < v10 )
    {
      v12 = v3[2];
      if ( v12 > (unsigned int)v8 || v12 < 0x1000 || (v12 & 0xFFF) != 0 || *v3 != 1852400232 || v3[1] != v9 )
      {
        v13 = CmpSelfHeal == 0;
        *(_DWORD *)(v2 + 296) = v8;
        *(_DWORD *)(v2 + 300) = v9;
        *(_QWORD *)(v2 + 304) = v3;
        if ( v13 && (CmpBootType & 6) == 0 )
        {
          v6 = -1073741492;
          SetFailureLocation(v2, 0, 3, -1073741492, 32);
LABEL_28:
          HvpCleanMap(BugCheckParameter2);
          return (unsigned int)v6;
        }
        v14 = v3[2];
        *v3 = 1852400232;
        v3[1] = v9;
        if ( v14 + v9 > (unsigned int)v8 || v14 < 0x1000 || (v14 & 0xFFF) != 0 )
          v3[2] = 4096;
        SetFailureLocation(v2, 1, 3, 1073741833, 16);
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      }
      v15 = HvpEnlistBinInMap(BugCheckParameter2, v8, (__int64)v3, 0LL, v9);
      v6 = v15;
      if ( (CmpSelfHeal || (CmpBootType & 6) != 0) && v15 == 1073741833 )
      {
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        SetFailureLocation(v2, 1, 3, 1073741833, 48);
        v6 = 0;
      }
      if ( v6 < 0 )
      {
        SetFailureLocation(v2, 0, 3, v6, 64);
        goto LABEL_28;
      }
      v16 = (unsigned int)v3[2];
      v9 += v16;
      v17 = (char *)v3 + v16;
      if ( (unsigned __int64)v3 + v16 < v16 )
      {
        v6 = -1073741492;
        SetFailureLocation(v2, 0, 3, -1073741492, 80);
        *(_DWORD *)(v2 + 296) = v3[2];
        *(_DWORD *)(v2 + 300) = v3[1];
        *(_QWORD *)(v2 + 304) = v3;
        goto LABEL_28;
      }
      v3 = (_DWORD *)((char *)v3 + v16);
    }
    return 0LL;
  }
  else
  {
    SetFailureLocation(v2, 0, 3, inited, 0);
    return (unsigned int)v6;
  }
}
