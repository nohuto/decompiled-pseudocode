/*
 * XREFs of UmfdFontManagement @ 0x1402354F0
 * Callers:
 *     GreNamedEscape @ 0x14027EC38 (GreNamedEscape.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontManagementRequest@@QEAA@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x140235574 (--0FontManagementRequest@@QEAA@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall UmfdFontManagement(
        struct _SURFOBJ *a1,
        struct _FONTOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7)
{
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  _BYTE v12[48]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v13; // [rsp+70h] [rbp-58h]
  unsigned int v14; // [rsp+98h] [rbp-30h]

  FontManagementRequest::FontManagementRequest((FontManagementRequest *)v12, a1, a2, a3, a4, a5, a6, a7);
  if ( v13 )
    v8 = *(unsigned int *)(*(_QWORD *)(v13 + 24) + 20LL);
  else
    v8 = 3LL;
  v9 = UmfdClientSendAndWaitForCompletion(v8, (__int64)v12, v7);
  v10 = v14;
  if ( v9 < 0 )
    return (unsigned int)-1;
  return v10;
}
