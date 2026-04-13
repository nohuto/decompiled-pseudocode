/*
 * XREFs of sub_180025B3C @ 0x180025B3C
 * Callers:
 *     sub_180025DE4 @ 0x180025DE4 (sub_180025DE4.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     _amsg_exit @ 0x1800266BA (_amsg_exit.c)
 *     _IsNonwritableInCurrentImage @ 0x180026720 (_IsNonwritableInCurrentImage.c)
 *     _initterm @ 0x18002688A (_initterm.c)
 */

__int64 __fastcall sub_180025B3C(__int64 a1, int a2, __int64 a3)
{
  int v5; // r15d
  PVOID StackBase; // rbx
  signed __int64 v7; // rax
  void (__fastcall **v8)(_QWORD); // r14
  void (__fastcall **v9)(_QWORD); // rsi
  void *v10; // r13
  __int64 v11; // r12
  void (__fastcall *v12)(_QWORD); // rcx
  int v14; // r14d
  PVOID v15; // rbx
  signed __int64 v16; // rax
  _QWORD *v17; // rbx
  int v18; // eax

  if ( !a2 )
  {
    if ( dword_18003A5EC > 0 )
    {
      v5 = 0;
      --dword_18003A5EC;
      StackBase = NtCurrentTeb()->NtTib.StackBase;
      while ( 1 )
      {
        v7 = _InterlockedCompareExchange64(&qword_18003AE58, (signed __int64)StackBase, 0LL);
        if ( !v7 )
          break;
        if ( (PVOID)v7 == StackBase )
        {
          v5 = 1;
          break;
        }
        Sleep(0x3E8u);
      }
      if ( dword_18003AE60 == 2 )
      {
        v8 = (void (__fastcall **)(_QWORD))Block;
        if ( Block )
        {
          v9 = (void (__fastcall **)(_QWORD))qword_18003AE68;
          v10 = Block;
          v11 = qword_18003AE68;
          while ( --v9 >= v8 )
          {
            if ( *v9 )
            {
              v12 = *v9;
              *v9 = 0LL;
              v12(v12);
              if ( v10 != Block || v11 != qword_18003AE68 )
              {
                v10 = Block;
                v8 = (void (__fastcall **)(_QWORD))Block;
                v11 = qword_18003AE68;
                v9 = (void (__fastcall **)(_QWORD))qword_18003AE68;
              }
            }
          }
          free(v8);
          qword_18003AE68 = 0LL;
          Block = 0LL;
        }
        dword_18003AE60 = 0;
        if ( !v5 )
          _InterlockedExchange64(&qword_18003AE58, 0LL);
      }
      else
      {
        amsg_exit(31LL);
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( a2 == 1 )
  {
    v14 = 0;
    v15 = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v16 = _InterlockedCompareExchange64(&qword_18003AE58, (signed __int64)v15, 0LL);
      if ( !v16 )
        break;
      if ( (PVOID)v16 == v15 )
      {
        v14 = 1;
        break;
      }
      Sleep(0x3E8u);
    }
    if ( dword_18003AE60 )
    {
      amsg_exit(31LL);
    }
    else
    {
      v17 = &unk_180029870;
      dword_18003AE60 = 1;
      v18 = 0;
      if ( &unk_180029870 < (_UNKNOWN *)qword_180029880 )
      {
        while ( !v18 )
        {
          if ( *v17 )
            v18 = ((__int64 (__fastcall *)(_QWORD))*v17)(*v17);
          if ( ++v17 >= qword_180029880 )
          {
            if ( v18 )
              return 0LL;
            goto LABEL_37;
          }
        }
        return 0LL;
      }
LABEL_37:
      initterm((_PVFV *)&First, (_PVFV *)&Last);
      dword_18003AE60 = 2;
    }
    if ( !v14 )
      _InterlockedExchange64(&qword_18003AE58, 0LL);
    if ( qword_18003AE78 && (unsigned int)IsNonwritableInCurrentImage(&qword_18003AE78) )
      qword_18003AE78(a1, 2LL, a3);
    ++dword_18003A5EC;
  }
  return 1LL;
}
