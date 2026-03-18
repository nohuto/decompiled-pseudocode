/*
 * XREFs of UmfdQueryGlyphMetricsPlusBits @ 0x1400FCAAC
 * Callers:
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1400FC8C8 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdQueryGlyphMetricsPlusBits(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v10; // eax
  unsigned int v11; // ecx
  void **v13; // [rsp+38h] [rbp-69h] BYREF
  int v14; // [rsp+40h] [rbp-61h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-59h]
  __int64 v16; // [rsp+50h] [rbp-51h]
  char v17; // [rsp+58h] [rbp-49h]
  __int64 v18; // [rsp+60h] [rbp-41h]
  int v19; // [rsp+68h] [rbp-39h]
  int v20; // [rsp+6Ch] [rbp-35h]
  __int64 v21; // [rsp+70h] [rbp-31h]
  __int128 v22; // [rsp+78h] [rbp-29h]
  int v23; // [rsp+88h] [rbp-19h]
  int v24; // [rsp+8Ch] [rbp-15h]
  __int64 v25; // [rsp+90h] [rbp-11h]
  __int64 v26; // [rsp+98h] [rbp-9h]
  __int64 v27; // [rsp+A0h] [rbp-1h]
  __int128 v28; // [rsp+A8h] [rbp+7h]
  __int64 v29; // [rsp+B8h] [rbp+17h]
  __int128 ThreadInformation; // [rsp+C8h] [rbp+27h] BYREF

  v14 = 2;
  CurrentThread = KeGetCurrentThread();
  v17 = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v16 = ThreadInformation;
    v17 = 1;
  }
  v23 = a4;
  v13 = &QueryGlyphMetricsPlusBitsRequest::`vftable';
  v25 = a5;
  v26 = a6;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v18 = a1;
  v19 = 1;
  v21 = a2;
  v20 = a3;
  v22 = 0LL;
  v24 = -1;
  v10 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 20LL), &v13);
  v11 = v24;
  if ( v10 < 0 )
    return (unsigned int)-1;
  return v11;
}
