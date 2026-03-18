/*
 * XREFs of UsbhGetLocationIdString @ 0x1C00064F0
 * Callers:
 *     UsbhCreatePdo @ 0x1C0005B90 (UsbhCreatePdo.c)
 * Callees:
 *     UsbhMakeId @ 0x1C0006BF0 (UsbhMakeId.c)
 *     Short2Bcd @ 0x1C0006E7C (Short2Bcd.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

__int64 __fastcall UsbhGetLocationIdString(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int16 v8; // bp
  unsigned int v9; // ebx
  __int64 Id; // rax
  __int64 v11; // rax
  int v12; // ecx
  __int16 v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+20h] [rbp-38h]
  __int16 v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+28h] [rbp-30h]
  __int16 v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+30h] [rbp-28h]
  int v20; // [rsp+70h] [rbp+18h] BYREF

  LOWORD(v20) = a3;
  v6 = PdoExt(a2);
  v7 = FdoExt(a1);
  v8 = Short2Bcd(*(unsigned __int16 *)(v7 + 1376));
  v9 = 0;
  v18 = Short2Bcd(*(unsigned __int16 *)(v6 + 1420));
  v20 = 0;
  v16 = 4;
  v14 = 0;
  Id = UsbhMakeId(1LL, L"Port_#nnnn", 0LL, &v20, v14, v16, v18, 0LL);
  if ( Id
    && (LOWORD(v19) = v8,
        LOWORD(v17) = 4,
        LOWORD(v15) = 1,
        (v11 = UsbhMakeId(1LL, L".Hub_#nnnn", Id, &v20, v15, v17, v19, 0LL)) != 0) )
  {
    v12 = v20;
    *(_QWORD *)(a4 + 8) = v11;
    *(_WORD *)a4 = 1033;
    *(_DWORD *)(a4 + 4) = v12;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
