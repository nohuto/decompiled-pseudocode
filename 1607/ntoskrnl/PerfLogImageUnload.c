/*
 * XREFs of PerfLogImageUnload @ 0x140429AFC
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x140429D0C (EtwpEnumerateAddressSpace.c)
 *     MiUnmapViewOfSection @ 0x14042D2D0 (MiUnmapViewOfSection.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpPsProvTraceImage @ 0x14054B5DC (EtwpPsProvTraceImage.c)
 */

void __fastcall PerfLogImageUnload(
        unsigned __int16 *a1,
        __int64 a2,
        int a3,
        void *a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        char a8,
        unsigned int a9)
{
  unsigned __int16 *v11; // rdi
  __int64 v12; // rcx
  PIMAGE_NT_HEADERS v13; // rax
  int v14; // eax
  int v15; // eax
  unsigned __int16 *v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int16 *v18; // [rsp+38h] [rbp-C0h]
  _BYTE v19[16]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-A8h] BYREF
  int v21; // [rsp+60h] [rbp-98h]
  unsigned int CheckSum; // [rsp+64h] [rbp-94h]
  unsigned int TimeDateStamp; // [rsp+68h] [rbp-90h]
  char v24; // [rsp+6Ch] [rbp-8Ch]
  char v25; // [rsp+6Dh] [rbp-8Bh]
  __int16 v26; // [rsp+6Eh] [rbp-8Ah]
  unsigned __int64 ImageBase; // [rsp+70h] [rbp-88h]
  __int64 v28; // [rsp+78h] [rbp-80h]
  __int64 v29; // [rsp+80h] [rbp-78h]
  _QWORD v30[3]; // [rsp+90h] [rbp-68h] BYREF
  int v31; // [rsp+A8h] [rbp-50h]
  int v32; // [rsp+ACh] [rbp-4Ch]
  void *v33; // [rsp+B0h] [rbp-48h]
  __int64 v34; // [rsp+B8h] [rbp-40h]

  v11 = a1;
  v18 = a1;
  v12 = 0LL;
  v17 = 0LL;
  if ( a2 && FltMgrCallbacks )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64 *))(FltMgrCallbacks + 16))(a2, 512LL, v19, &v17);
    v16 = (unsigned __int16 *)v19;
    if ( v15 < 0 )
      v16 = v11;
    v11 = v16;
    v18 = v16;
    v12 = v17;
  }
  if ( v11 && *v11 && *((_QWORD *)v11 + 1) )
  {
    v21 = a3;
    v20[0] = a4;
    v20[1] = a5;
    CheckSum = a6;
    v26 = 0;
    v28 = 0LL;
    v29 = 0LL;
    TimeDateStamp = 0;
    ImageBase = 0LL;
    v24 = a7;
    v25 = a8;
    if ( a3 )
    {
      v13 = RtlImageNtHeader(a4);
      if ( v13 )
      {
        CheckSum = v13->OptionalHeader.CheckSum;
        TimeDateStamp = v13->FileHeader.TimeDateStamp;
        ImageBase = v13->OptionalHeader.ImageBase;
      }
    }
    if ( (dword_1402FD520 & 4) != 0 )
      EtwpPsProvTraceImage(v11, v20, 5122LL, a9);
    v30[0] = v20;
    v30[1] = 56LL;
    v30[2] = *((_QWORD *)v11 + 1);
    v31 = *v11;
    v32 = 0;
    v33 = &EtwpNull;
    v34 = 2LL;
    v14 = 4200707;
    if ( a9 )
      v14 = 20977923;
    EtwTraceKernelEvent((int)v30, 3, 4u, 5122, v14);
    v12 = v17;
  }
  if ( v12 )
    (*(void (**)(void))(FltMgrCallbacks + 24))();
}
