/*
 * XREFs of ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01E1528
 * Callers:
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C01E18CC (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 */

__int64 __fastcall AddConvProp(
        struct tagWND *a1,
        struct tagWND *a2,
        int a3,
        struct tagDDECONV *a4,
        struct tagDDECONV *a5)
{
  __int64 Prop; // rax
  struct tagWND *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx

  Prop = GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL);
  HMAssignmentLock((char *)a4 + 24, Prop);
  HMAssignmentLock((char *)a4 + 40, a1);
  HMAssignmentLock((char *)a4 + 48, a2);
  HMAssignmentLock((char *)a4 + 32, a5);
  *((_QWORD *)a4 + 8) = 0LL;
  v10 = a1;
  *((_QWORD *)a4 + 7) = 0LL;
  v11 = (unsigned __int16)atomDDEImp;
  *((_DWORD *)a4 + 20) = a3;
  if ( (a3 & 1) != 0 )
    v10 = a2;
  v12 = GetProp((__int64)v10, v11, 1LL);
  if ( v12 )
    ++*(_WORD *)(v12 + 90);
  ++*((_DWORD *)a4 + 2);
  v13 = (unsigned __int16)atomDDETrack;
  *((_QWORD *)a4 + 11) = v12;
  InternalSetProp((__int64)a1, v13, (__int64)a4, 1);
  return 1LL;
}
