/*
 * XREFs of GreExtEscape @ 0x1C01257FC
 * Callers:
 *     NtGdiExtEscape @ 0x1C0125230 (NtGdiExtEscape.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0268D84 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 * Callees:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C012588C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025E4FC (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtEscape(HDC a1, int a2, int a3, char *a4, unsigned int a5, char *a6)
{
  unsigned int v10; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16[2]; // [rsp+28h] [rbp-69h]
  __int64 v17; // [rsp+38h] [rbp-59h] BYREF
  int v18; // [rsp+44h] [rbp-4Dh]
  _BYTE v19[32]; // [rsp+68h] [rbp-29h] BYREF
  int v20; // [rsp+88h] [rbp-9h]
  _QWORD v21[6]; // [rsp+98h] [rbp+7h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v21, a1);
  v10 = 0;
  if ( v21[0] )
  {
    v10 = GreExtEscapeInternal((struct DCOBJ *)v21, a2, a3, a4, a5, a6);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)&v17);
    v20 = 0;
    v18 = 1;
    v12 = PushThreadGuardedObject(v19, &v17, XFERDCOBJ::ThreadCleanup);
    v20 = v12;
    if ( v12 )
    {
      XDCOBJ::vLock((XDCOBJ *)&v17, a1);
      v12 = v20;
    }
    if ( v17 )
    {
      v10 = GreExtEscapeInternal((struct DCOBJ *)&v17, a2, a3, a4, a5, a6);
      v12 = v20;
    }
    if ( v12 )
      PopThreadGuardedObject(v19, v13, v14, v15, *(_QWORD *)v16);
    DCOBJ::~DCOBJ((DCOBJ *)&v17);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v21);
  return v10;
}
