/*
 * XREFs of ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A4AEC
 * Callers:
 *     UmfdDispatchEscape @ 0x1C02A519C (UmfdDispatchEscape.c)
 * Callees:
 *     cParseFontResources @ 0x1C0158554 (cParseFontResources.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C01BF4D8 (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C02A3EF4 (--0AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C02A41CC (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 */

void __fastcall UmfdEscParseFontResources(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  char *v1; // rbx
  _DWORD *v2; // rsi
  __int64 v3; // rcx
  int v4; // edi
  volatile void *v5; // rcx
  __int64 v6[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v7[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+80h] [rbp+8h] BYREF
  void *Src; // [rsp+88h] [rbp+10h] BYREF
  char *v10; // [rsp+90h] [rbp+18h]
  char v11; // [rsp+98h] [rbp+20h] BYREF

  v1 = (char *)a1 + 8;
  v6[1] = (__int64)a1 + 8;
  v2 = (_DWORD *)((char *)a1 + 8);
  v10 = (char *)a1 + 8;
  Src = 0LL;
  AutoSharedUmfdFileViewLock::AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v11);
  if ( UmfdFileviewLookup
    && (LODWORD(v8) = *(_DWORD *)v1, NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v3, &v8, v6)) )
  {
    v4 = cParseFontResources(v6[0], &v8, v7, (PVOID *)((unsigned __int64)&Src & -(__int64)(*((_QWORD *)v1 + 1) != 0LL)));
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v11);
    if ( v4 )
    {
      v5 = (volatile void *)*((_QWORD *)v1 + 1);
      if ( v5 )
      {
        if ( (unsigned int)(8 * v4) <= *((_DWORD *)v1 + 4) )
        {
          ProbeForWrite(v5, *((unsigned int *)v1 + 4), 8u);
          memmove(*((void **)v1 + 1), Src, (unsigned int)(8 * v4));
        }
        else
        {
          v4 = 0;
        }
        EngFreeMem(Src);
      }
      if ( v4 )
      {
        ProbeForWrite(*((volatile void **)v1 + 3), 8uLL, 8u);
        ProbeForWrite(*((volatile void **)v1 + 4), 8uLL, 8u);
        **((_QWORD **)v1 + 3) = v8;
        **((_QWORD **)v1 + 4) = v7[0];
      }
    }
    *v2 = v4;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v11);
  }
}
