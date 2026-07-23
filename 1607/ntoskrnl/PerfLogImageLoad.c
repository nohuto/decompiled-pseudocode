/*
 * XREFs of PerfLogImageLoad @ 0x1404285AC
 * Callers:
 *     PsCallImageNotifyRoutines @ 0x140428110 (PsCallImageNotifyRoutines.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpPsProvTraceImage @ 0x14054B5DC (EtwpPsProvTraceImage.c)
 */

void __fastcall PerfLogImageLoad(unsigned __int16 *a1, int a2, int *a3)
{
  int v4; // edx
  PIMAGE_NT_HEADERS v5; // rax
  PVOID v6[2]; // [rsp+40h] [rbp-88h] BYREF
  int v7; // [rsp+50h] [rbp-78h]
  __int64 v8; // [rsp+54h] [rbp-74h]
  char v9; // [rsp+5Ch] [rbp-6Ch]
  _BYTE v10[3]; // [rsp+5Dh] [rbp-6Bh]
  unsigned __int64 ImageBase; // [rsp+60h] [rbp-68h]
  __int64 v12; // [rsp+68h] [rbp-60h]
  __int64 v13; // [rsp+70h] [rbp-58h]
  _QWORD v14[3]; // [rsp+80h] [rbp-48h] BYREF
  int v15; // [rsp+98h] [rbp-30h]
  int v16; // [rsp+9Ch] [rbp-2Ch]
  void *v17; // [rsp+A0h] [rbp-28h]
  __int64 v18; // [rsp+A8h] [rbp-20h]

  if ( a1 && *a1 && *((_QWORD *)a1 + 1) )
  {
    v6[0] = *((PVOID *)a3 + 1);
    v6[1] = *((PVOID *)a3 + 3);
    v7 = a2;
    *(_WORD *)&v10[1] = 0;
    v12 = 0LL;
    v13 = 0LL;
    v8 = 0LL;
    ImageBase = 0LL;
    v4 = *a3;
    v9 = ((unsigned int)*a3 >> 12) & 0xF;
    *(_WORD *)v10 = BYTE2(v4) & 7;
    v5 = RtlImageNtHeader(v6[0]);
    if ( v5 )
    {
      LODWORD(v8) = v5->OptionalHeader.CheckSum;
      HIDWORD(v8) = v5->FileHeader.TimeDateStamp;
      ImageBase = v5->OptionalHeader.ImageBase;
    }
    if ( (dword_1402FD520 & 4) != 0 )
      EtwpPsProvTraceImage(a1, v6, 5121LL, 0LL);
    v14[0] = v6;
    v14[1] = 56LL;
    v14[2] = *((_QWORD *)a1 + 1);
    v15 = *a1;
    v16 = 0;
    v17 = &EtwpNull;
    v18 = 2LL;
    EtwTraceKernelEvent((int)v14, 3, 4u, 778, 5249283);
  }
}
