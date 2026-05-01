/*
 * XREFs of ??_GTaskbarLayoutPolicyManager@@UEAAPEAXI@Z @ 0x180008B00
 * Callers:
 *     <none>
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x180003D64 (-_com_issue_error@@YAXJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
TaskbarLayoutPolicyManager *__fastcall TaskbarLayoutPolicyManager::`scalar deleting destructor'(
        TaskbarLayoutPolicyManager *this,
        char a2)
{
  OLECHAR *v4; // rcx
  OLECHAR *v5; // rcx
  OLECHAR *v6; // rcx
  OLECHAR *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  v4 = (OLECHAR *)*((_QWORD *)this + 14);
  if ( v4 )
    SysFreeString(v4);
  v5 = (OLECHAR *)*((_QWORD *)this + 13);
  if ( v5 )
    SysFreeString(v5);
  v6 = (OLECHAR *)*((_QWORD *)this + 12);
  if ( v6 )
    SysFreeString(v6);
  v7 = (OLECHAR *)*((_QWORD *)this + 11);
  if ( v7 )
    SysFreeString(v7);
  if ( VariantClear((VARIANTARG *)((char *)this + 64)) < 0 )
    _com_issue_error();
  v8 = (void *)*((_QWORD *)this + 5);
  if ( v8 )
  {
    CoTaskMemFree(v8);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v9 = (void *)*((_QWORD *)this + 2);
  if ( v9 )
  {
    CoTaskMemFree(v9);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
