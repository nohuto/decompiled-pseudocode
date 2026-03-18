/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C02D6510
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C02D626C (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 */

void __fastcall QueryFontDataRequest::CaptureUsermodeParameters(QueryFontDataRequest *this, _QWORD *a2)
{
  struct _FONTOBJ *v3; // rax
  _OWORD *v4; // rdi
  const void *v5; // r14
  int v6; // esi
  _OWORD *v7; // rax
  const void **v8; // rcx
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // r8d
  int v13; // edx
  int v14; // r10d
  unsigned int v15; // ecx
  unsigned int v16; // r11d
  __int64 v17; // rax
  int v18; // ecx
  _DWORD *v19; // r9
  unsigned int v20; // ecx
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax

  v3 = (struct _FONTOBJ *)a2[2];
  v4 = (_OWORD *)a2[3];
  v5 = (const void *)a2[4];
  v6 = *((_DWORD *)a2 + 11);
  if ( v3 == *((struct _FONTOBJ **)this + 9)
    && FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 5), v3)
    && v6 >= 0
    && v5 == *((const void **)this + 11) )
  {
    v7 = (_OWORD *)*((_QWORD *)this + 6);
    if ( v7 )
    {
      if ( v4 != *((_OWORD **)this + 10) )
        return;
      *v7 = *v4;
      v7[1] = v4[1];
      v7[2] = v4[2];
      v7[3] = v4[3];
      v8 = (const void **)*((_QWORD *)this + 6);
      if ( *v8 == v5 )
        *v8 = (const void *)*((_QWORD *)this + 7);
      else
        *v8 = 0LL;
    }
    else if ( v4 )
    {
      return;
    }
    if ( !*((_QWORD *)this + 7) )
      goto LABEL_42;
    v9 = *((_DWORD *)this + 16);
    if ( !v9 )
      goto LABEL_42;
    v10 = *((_DWORD *)this + 8);
    if ( v10 == 2 )
      goto LABEL_42;
    if ( v6 > v9 )
      return;
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 2 && v6 != 124 )
        return;
    }
    else if ( (unsigned int)v6 < 0x14 )
    {
      return;
    }
    memmove(*((void **)this + 7), v5, *((unsigned int *)this + 16));
    v12 = *((_DWORD *)this + 8);
    if ( v12 == 3 )
    {
LABEL_42:
      *((_DWORD *)this + 17) = v6;
      return;
    }
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    if ( v12 == 1 )
    {
      v17 = *((_QWORD *)this + 7);
      v13 = *(_DWORD *)(v17 + 8);
      v14 = *(_DWORD *)(v17 + 12);
      v18 = *(_DWORD *)(*((_QWORD *)this + 5) + 12LL);
      if ( (v18 & 0x10000) != 0 )
      {
        if ( (v18 & 0x10000000) != 0 )
          v15 = *(_DWORD *)(v17 + 8);
        else
          v15 = (unsigned int)(v13 + 1) >> 1;
      }
      else
      {
        v15 = (unsigned int)(v13 + 7) >> 3;
      }
      v16 = 16;
LABEL_35:
      if ( v15 )
      {
        if ( v13 < 0 )
          return;
        if ( v14 < 0 )
          return;
        v21 = (unsigned int)v14 * (unsigned __int64)v15;
        if ( v21 > 0xFFFFFFFF )
          return;
        v22 = (v21 + 3) & 0xFFFFFFFC;
        if ( v22 < (unsigned int)v21 || v22 + v16 < v16 || v22 + v16 > *((_DWORD *)this + 16) )
          return;
      }
      goto LABEL_42;
    }
    v19 = (_DWORD *)*((_QWORD *)this + 6);
    if ( !v19 )
      goto LABEL_35;
    v13 = v19[10] - v19[8];
    v14 = v19[11] - v19[9];
    if ( v12 == 5 )
    {
      v20 = ((unsigned int)(v13 + 7) >> 3) + 3;
    }
    else
    {
      if ( ((v12 - 6) & 0xFFFFFFFC) != 0 || v12 == 7 )
        goto LABEL_35;
      v20 = v13 + 3;
    }
    v15 = v20 & 0xFFFFFFFC;
    goto LABEL_35;
  }
}
