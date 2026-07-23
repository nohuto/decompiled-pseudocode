/*
 * XREFs of LdrpResSearchResourceHandle @ 0x1800DD580
 * Callers:
 *     LdrResSearchResource @ 0x180039300 (LdrResSearchResource.c)
 * Callees:
 *     LdrResFallbackLangList @ 0x18000FD84 (LdrResFallbackLangList.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800381CC (LdrpResSearchResourceInsideDirectory.c)
 *     RtlLcidToLocaleName @ 0x180042E70 (RtlLcidToLocaleName.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC934 (LdrpTraceLoadMUIDll.c)
 *     LdrpResFileSize @ 0x1800DD100 (LdrpResFileSize.c)
 *     LdrpResReadFile @ 0x1800DD4C4 (LdrpResReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800DDBB0 (LdrpResSetFilePointer.c)
 */

int __fastcall LdrpResSearchResourceHandle(
        char *Handle,
        int a2,
        _QWORD *a3,
        int a4,
        unsigned __int64 *a5,
        __int64 a6,
        void *a7,
        __int64 a8)
{
  __int16 v8; // bx
  _DWORD *v10; // r12
  int result; // eax
  int File; // edi
  unsigned int v13; // ebx
  int v14; // ecx
  unsigned __int16 v15; // cx
  unsigned int v16; // r14d
  ULONG v17; // edi
  _DWORD *Heap; // rax
  _DWORD *v19; // rbx
  int v20; // edx
  unsigned int v21; // ecx
  unsigned __int64 v22; // r15
  _DWORD *v23; // r15
  __int64 v24; // r14
  _WORD *v25; // r13
  int v26; // [rsp+70h] [rbp-4C8h]
  unsigned __int16 v27; // [rsp+74h] [rbp-4C4h] BYREF
  int v28; // [rsp+78h] [rbp-4C0h]
  int v29; // [rsp+7Ch] [rbp-4BCh]
  int v30; // [rsp+80h] [rbp-4B8h]
  __int64 v31; // [rsp+88h] [rbp-4B0h] BYREF
  _QWORD *v32; // [rsp+90h] [rbp-4A8h]
  _QWORD v33[2]; // [rsp+98h] [rbp-4A0h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-490h]
  unsigned __int64 *v35; // [rsp+B0h] [rbp-488h]
  __int64 v36; // [rsp+B8h] [rbp-480h]
  void *v37; // [rsp+C0h] [rbp-478h]
  int v38; // [rsp+C8h] [rbp-470h] BYREF
  const wchar_t *v39; // [rsp+D0h] [rbp-468h]
  _UNICODE_STRING LocaleName; // [rsp+D8h] [rbp-460h] BYREF
  int v41; // [rsp+F0h] [rbp-448h] BYREF
  __int16 v42; // [rsp+F4h] [rbp-444h]
  unsigned __int16 v43; // [rsp+F6h] [rbp-442h]
  unsigned __int16 v44; // [rsp+104h] [rbp-434h]
  __int16 v45; // [rsp+108h] [rbp-430h]
  unsigned int v46; // [rsp+164h] [rbp-3D4h]
  unsigned int v47; // [rsp+174h] [rbp-3C4h]
  unsigned int v48; // [rsp+178h] [rbp-3C0h]
  int v49; // [rsp+17Ch] [rbp-3BCh]
  unsigned int v50; // [rsp+188h] [rbp-3B0h]
  int v51; // [rsp+18Ch] [rbp-3ACh]
  __int16 v52[30]; // [rsp+200h] [rbp-338h] BYREF
  unsigned int v53; // [rsp+23Ch] [rbp-2FCh]
  unsigned __int16 v54[264]; // [rsp+240h] [rbp-2F8h] BYREF
  _WORD Src[88]; // [rsp+450h] [rbp-E8h] BYREF

  v29 = a4;
  v32 = a3;
  v8 = a2;
  v28 = a2;
  v35 = a5;
  v34 = a6;
  v37 = a7;
  v36 = a8;
  LODWORD(v33[0]) = 4456514;
  v33[1] = L"LdrpResSearchResourceHandle Enter";
  v38 = 4325440;
  v39 = L"LdrpResSearchResourceHandle Exit";
  memset(Src, 0, 0xACuLL);
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)v33, MEMORY[0x7FFE0384]);
  v10 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    File = -1073741811;
    goto LABEL_9;
  }
  v30 = v8 & 0x1000;
  result = LdrpResFileSize(Handle, &v31);
  if ( result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = LdrpResReadFile(Handle, 0LL, v52, 0x40u);
  if ( result < 0 )
    return result;
  if ( v52[0] != 23117 )
    goto LABEL_8;
  v13 = v53;
  if ( v30 )
  {
    if ( (unsigned __int64)v53 + 264 < v53
      || v53 > 0x10000000
      || v53 + 264 < v53
      || (unsigned __int64)v53 + 264 >= (unsigned int)v31 )
    {
      goto LABEL_8;
    }
  }
  result = LdrpResReadFile(Handle, v53, &v41, 0x108u);
  if ( result < 0 )
    return result;
  if ( v41 != 17744 )
    goto LABEL_8;
  if ( v45 != 267 )
  {
    if ( v45 != 523 || v42 != 512 && v42 != -31132 )
      goto LABEL_8;
    if ( v47 > 2 && v51 )
    {
      v15 = v44;
      if ( v44 >= 0x88u )
      {
        v16 = v50;
        goto LABEL_26;
      }
LABEL_8:
      File = -1073741701;
LABEL_9:
      v26 = File;
      goto LABEL_65;
    }
LABEL_22:
    File = -1073741687;
    goto LABEL_9;
  }
  if ( v42 != 332 )
  {
    if ( (unsigned __int16)(v42 - 448) > 4u )
      goto LABEL_8;
    v14 = 21;
    if ( !_bittest(&v14, (unsigned __int16)(v42 - 448)) )
      goto LABEL_8;
  }
  if ( v46 <= 2 || !v49 )
    goto LABEL_22;
  v15 = v44;
  if ( v44 < 0x78u )
    goto LABEL_8;
  v16 = v48;
LABEL_26:
  if ( !v16 )
    return -1073741687;
  if ( !v43 )
    goto LABEL_8;
  v17 = 40 * v43;
  if ( v13 + v17 + v15 + 24 > (unsigned int)v31 )
    goto LABEL_8;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
  v10 = Heap;
  v33[0] = Heap;
  if ( !Heap )
  {
    File = -1073741801;
    goto LABEL_9;
  }
  File = LdrpResReadFile(Handle, v13 + v44 + 24, Heap, v17);
  v26 = File;
  if ( File < 0 )
    goto LABEL_65;
  v19 = v10;
  v20 = 0;
  if ( v43 )
  {
    do
    {
      v21 = v19[3];
      if ( v16 >= v21 && v16 < v19[4] + v21 )
        break;
      v19 += 10;
      ++v20;
    }
    while ( v20 < v43 );
  }
  if ( v20 >= v43 )
    goto LABEL_8;
  v22 = v16 + (unsigned int)v19[5] - (unsigned __int64)(unsigned int)v19[3];
  if ( v22 )
  {
    File = LdrpResSetFilePointer(Handle, v22);
    v26 = File;
    if ( File >= 0 )
    {
      if ( v29 == 3 )
      {
        v54[0] = 0;
        if ( (v28 & 0x20) != 0 )
        {
          v54[0] = 1;
          v54[2] = 0;
        }
        else
        {
          File = LdrResFallbackLangList(0LL, 0LL, *((_WORD *)v32 + 8), v28, v54);
          v26 = File;
          if ( File < 0 && v30 )
            goto LABEL_65;
        }
      }
      v27 = 0;
      File = LdrpResSearchResourceInsideDirectory(
               0LL,
               Handle,
               (unsigned int)v31,
               v22,
               (__int64)&v41,
               (__int64)v19,
               v32,
               v29,
               (__int64)v54,
               v35,
               v34,
               v28,
               &v27);
      v26 = File;
      if ( File >= 0 )
      {
        v23 = (_DWORD *)v36;
        if ( v36 )
        {
          if ( v27 )
          {
            LocaleName.Buffer = Src;
            LocaleName.MaximumLength = 172;
            File = RtlLcidToLocaleName(v27, &LocaleName, 2u, 0);
            v26 = File;
            if ( File < 0 )
              goto LABEL_65;
            v24 = -1LL;
            do
              ++v24;
            while ( Src[v24] );
          }
          else
          {
            Src[0] = 0;
            LODWORD(v24) = 0;
          }
          if ( (unsigned int)v24 < *v23 && (v25 = v37) != 0LL )
          {
            memmove(v37, Src, 2LL * (unsigned int)v24);
            *v23 = v24 + 1;
            v25[(unsigned int)v24] = 0;
          }
          else
          {
            *v23 = v24 + 1;
            File = -1073741789;
            v26 = -1073741789;
          }
        }
      }
    }
  }
  else
  {
    File = -1073741701;
    v26 = -1073741701;
  }
LABEL_65:
  if ( v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    File = v26;
  }
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v38, MEMORY[0x7FFE0384]);
  return File;
}
