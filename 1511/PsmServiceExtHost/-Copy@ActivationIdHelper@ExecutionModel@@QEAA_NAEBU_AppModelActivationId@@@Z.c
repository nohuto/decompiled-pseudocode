/*
 * XREFs of ?Copy@ActivationIdHelper@ExecutionModel@@QEAA_NAEBU_AppModelActivationId@@@Z @ 0x18001F880
 * Callers:
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180013C80 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?reset@?$auto_xxx@PEAEP6AXPEAE@Z$1??$_delete_array@E@tlx@@YAX0@Z$0A@@tlx@@QEAAXPEAE@Z @ 0x180036E90 (-reset@-$auto_xxx@PEAEP6AXPEAE@Z$1--$_delete_array@E@tlx@@YAX0@Z$0A@@tlx@@QEAAXPEAE@Z.c)
 */

char __fastcall ExecutionModel::ActivationIdHelper::Copy(
        ExecutionModel::ActivationIdHelper *this,
        const struct _AppModelActivationId *a2)
{
  void *v4; // rcx
  int v5; // edx
  _WORD *v6; // rcx
  int v7; // edx
  __int64 v8; // rax
  void *v9; // rax
  void *v10; // rcx
  void *v11; // rbx
  _WORD *v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // r10d
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  __int16 v17; // cx
  void *v19; // rax
  _OWORD *v20; // rcx
  unsigned __int64 v21; // rdi

  if ( *(int *)a2 >= 5 )
    return 0;
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  v5 = *(_DWORD *)a2;
  *(_DWORD *)this = *(_DWORD *)a2;
  v6 = (_WORD *)*((_QWORD *)a2 + 1);
  *((_QWORD *)this + 1) = v6;
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  if ( !v6 )
    return 1;
  if ( !v5 )
  {
    v19 = malloc(0x10uLL);
    tlx::auto_xxx<unsigned char *,void (*)(unsigned char *),&void tlx::_delete_array<unsigned char>(unsigned char *),0>::reset(
      (char *)this + 24,
      v19);
    v20 = (_OWORD *)*((_QWORD *)this + 3);
    if ( v20 )
      *v20 = *(_OWORD *)*((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = *((_QWORD *)this + 3);
    return 1;
  }
  v7 = 0;
  v8 = 231LL;
  while ( *v6 )
  {
    ++v6;
    if ( !--v8 )
    {
      v7 = -2147024809;
      v21 = 0LL;
      goto LABEL_11;
    }
  }
  v21 = 231 - v8;
LABEL_11:
  if ( v7 >= 0 )
  {
    v9 = malloc(2 * v21 + 2);
    v10 = (void *)*((_QWORD *)this + 3);
    v11 = v9;
    if ( v9 != v10 )
    {
      if ( v10 )
        operator delete(v10);
      *((_QWORD *)this + 3) = v11;
    }
    v12 = (_WORD *)*((_QWORD *)this + 3);
    if ( v12 )
    {
      v13 = v21 + 1;
      v14 = 0;
      if ( v21 > 0x7FFFFFFE )
        v14 = -2147024809;
      if ( v14 < 0 )
      {
        if ( v21 == -1LL )
        {
LABEL_28:
          if ( v14 >= 0 )
          {
            *((_QWORD *)this + 1) = *((_QWORD *)this + 3);
            return 1;
          }
          goto LABEL_35;
        }
      }
      else
      {
        v14 = 0;
        if ( v21 == -1LL )
          goto LABEL_25;
        v15 = 2147483646 - v13;
        v16 = *((_QWORD *)this + 1) - (_QWORD)v12;
        while ( v15 + v13 )
        {
          v17 = *(_WORD *)((char *)v12 + v16);
          if ( !v17 )
            break;
          *v12++ = v17;
          if ( !--v13 )
            goto LABEL_25;
        }
        if ( !v13 )
        {
LABEL_25:
          --v12;
          v14 = -2147024774;
        }
      }
      *v12 = 0;
      goto LABEL_28;
    }
  }
LABEL_35:
  tlx::auto_xxx<unsigned char *,void (*)(unsigned char *),&void tlx::_delete_array<unsigned char>(unsigned char *),0>::reset(
    (char *)this + 24,
    0LL);
  return 0;
}
