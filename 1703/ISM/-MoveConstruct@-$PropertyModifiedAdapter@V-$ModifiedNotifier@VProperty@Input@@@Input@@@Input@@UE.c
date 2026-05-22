/*
 * XREFs of ?MoveConstruct@?$PropertyModifiedAdapter@V?$ModifiedNotifier@VProperty@Input@@@Input@@@Input@@UEAAPEAVPropertyNode@2@XZ @ 0x18001CA80
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char *__fastcall Input::PropertyModifiedAdapter<Input::ModifiedNotifier<Input::Property>>::MoveConstruct(__int64 a1)
{
  char *v3; // [rsp+50h] [rbp+8h]

  v3 = (char *)operator new(0x38uLL);
  *(_OWORD *)(v3 + 8) = 0uLL;
  *((_QWORD *)v3 + 3) = 0LL;
  *(_QWORD *)v3 = &Input::Property::`vftable';
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v3 + 144LL))(v3, a1);
  *(_QWORD *)v3 = &Input::ModifiedNotifier<Input::Property>::`vftable';
  *((_QWORD *)v3 + 6) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)v3 = &Input::PropertyModifiedAdapter<Input::ModifiedNotifier<Input::Property>>::`vftable';
  return v3;
}
