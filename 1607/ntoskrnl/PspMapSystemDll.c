/*
 * XREFs of PspMapSystemDll @ 0x14046ADA8
 * Callers:
 *     PsMapSystemDlls @ 0x14046ACD8 (PsMapSystemDlls.c)
 *     PspLocateSystemDll @ 0x140554BC0 (PspLocateSystemDll.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MmMapViewOfSection @ 0x14046AEB8 (MmMapViewOfSection.c)
 *     PspReferenceSystemDll @ 0x14046AF3C (PspReferenceSystemDll.c)
 */

__int64 __fastcall PspMapSystemDll(struct _KPROCESS *a1, signed __int64 *a2, int a3, int a4)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  int v10; // edi
  __int64 result; // rax
  PVOID v12; // rsi
  PIMAGE_NT_HEADERS v13; // rax
  unsigned __int64 ImageBase_high; // rax
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF

  v8 = PspReferenceSystemDll(a2);
  v9 = v8;
  if ( !v8 )
    return 3221225473LL;
  BaseAddress = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v10 = MmMapViewOfSection(
          v8,
          (_DWORD)a1,
          (unsigned int)&BaseAddress,
          0,
          0LL,
          (__int64)&v16,
          (__int64)&v15,
          1,
          a3 != 0 ? 0x20000000 : 0,
          4);
  ObFastDereferenceObject(a2, v9);
  if ( v10 != 1073741827 )
  {
LABEL_3:
    if ( v10 < 0 )
      return (unsigned int)v10;
    goto LABEL_4;
  }
  if ( a1 != PsInitialSystemProcess )
  {
    v10 = -1073741800;
    goto LABEL_3;
  }
LABEL_4:
  if ( a4 )
  {
    v12 = BaseAddress;
    v10 = 0;
    v13 = RtlImageNtHeader(BaseAddress);
    if ( v13->OptionalHeader.Magic == 267 )
      ImageBase_high = HIDWORD(v13->OptionalHeader.ImageBase);
    else
      ImageBase_high = v13->OptionalHeader.ImageBase;
    a2[5] = ImageBase_high;
    a2[6] = (signed __int64)v12;
  }
  else
  {
    result = 3221225473LL;
    if ( (PVOID)a2[5] != BaseAddress )
      return result;
  }
  return (unsigned int)v10;
}
