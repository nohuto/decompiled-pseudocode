/*
 * XREFs of LdrpResSearchResourceHandle @ 0x1800CC8D0
 * Callers:
 *     LdrResSearchResource @ 0x18001AAA0 (LdrResSearchResource.c)
 * Callees:
 *     LdrpResSearchResourceInsideDirectory @ 0x1800196E8 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x18001BC14 (LdrResFallbackLangList.c)
 *     RtlLcidToLocaleName @ 0x18001F420 (RtlLcidToLocaleName.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 *     LdrpResFileSize @ 0x1800CC450 (LdrpResFileSize.c)
 *     LdrpResReadFile @ 0x1800CC814 (LdrpResReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800CCF08 (LdrpResSetFilePointer.c)
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
  bool v11; // di
  int result; // eax
  int File; // edi
  unsigned int v14; // ebx
  int v15; // ecx
  unsigned __int16 v16; // cx
  unsigned int v17; // r14d
  ULONG v18; // edi
  _DWORD *Heap; // rax
  _DWORD *v20; // rbx
  int v21; // edx
  unsigned int v22; // ecx
  unsigned __int64 v23; // r15
  _DWORD *v24; // r15
  __int64 v25; // r14
  _WORD *v26; // r13
  int v27; // [rsp+70h] [rbp-4C8h]
  unsigned __int16 v28; // [rsp+74h] [rbp-4C4h] BYREF
  int v29; // [rsp+78h] [rbp-4C0h]
  int v30; // [rsp+7Ch] [rbp-4BCh]
  __int64 v31; // [rsp+80h] [rbp-4B8h] BYREF
  int v32; // [rsp+88h] [rbp-4B0h]
  _QWORD *v33; // [rsp+90h] [rbp-4A8h]
  _QWORD v34[2]; // [rsp+98h] [rbp-4A0h] BYREF
  unsigned __int64 *v35; // [rsp+A8h] [rbp-490h]
  void *v36; // [rsp+B0h] [rbp-488h]
  __int64 v37; // [rsp+B8h] [rbp-480h]
  __int64 v38; // [rsp+C0h] [rbp-478h]
  int v39; // [rsp+C8h] [rbp-470h] BYREF
  const wchar_t *v40; // [rsp+D0h] [rbp-468h]
  _UNICODE_STRING LocaleName; // [rsp+D8h] [rbp-460h] BYREF
  int v42; // [rsp+F0h] [rbp-448h] BYREF
  __int16 v43; // [rsp+F4h] [rbp-444h]
  unsigned __int16 v44; // [rsp+F6h] [rbp-442h]
  unsigned __int16 v45; // [rsp+104h] [rbp-434h]
  __int16 v46; // [rsp+108h] [rbp-430h]
  unsigned int v47; // [rsp+164h] [rbp-3D4h]
  unsigned int v48; // [rsp+174h] [rbp-3C4h]
  unsigned int v49; // [rsp+178h] [rbp-3C0h]
  int v50; // [rsp+17Ch] [rbp-3BCh]
  unsigned int v51; // [rsp+188h] [rbp-3B0h]
  int v52; // [rsp+18Ch] [rbp-3ACh]
  __int16 v53[30]; // [rsp+200h] [rbp-338h] BYREF
  unsigned int v54; // [rsp+23Ch] [rbp-2FCh]
  unsigned __int16 v55[264]; // [rsp+240h] [rbp-2F8h] BYREF
  _WORD Src[88]; // [rsp+450h] [rbp-E8h] BYREF

  v29 = a4;
  v33 = a3;
  v8 = a2;
  v30 = a2;
  v35 = a5;
  v37 = a6;
  v36 = a7;
  v38 = a8;
  LODWORD(v34[0]) = 4456514;
  v34[1] = L"LdrpResSearchResourceHandle Enter";
  v39 = 4325440;
  v40 = L"LdrpResSearchResourceHandle Exit";
  memset(Src, 0, 172);
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)v34, MEMORY[0x7FFE0384]);
  v10 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    File = -1073741811;
    goto LABEL_9;
  }
  v32 = v8 & 0x1000;
  v11 = v32 != 0;
  result = LdrpResFileSize(Handle, &v31);
  if ( result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = LdrpResReadFile(Handle, 0LL, v53, 0x40u);
  if ( result < 0 )
    return result;
  if ( v53[0] != 23117 )
    goto LABEL_8;
  v14 = v54;
  if ( v11
    && ((unsigned __int64)v54 + 264 < v54
     || v54 > 0x10000000
     || v54 + 264 < v54
     || (unsigned __int64)v54 + 264 >= (unsigned int)v31) )
  {
    goto LABEL_8;
  }
  result = LdrpResReadFile(Handle, v54, &v42, 0x108u);
  if ( result < 0 )
    return result;
  if ( v42 != 17744 )
    goto LABEL_8;
  if ( v46 != 267 )
  {
    if ( v46 != 523 || v43 != 512 && v43 != -31132 )
      goto LABEL_8;
    if ( v48 > 2 && v52 )
    {
      v16 = v45;
      if ( v45 >= 0x88u )
      {
        v17 = v51;
        goto LABEL_26;
      }
LABEL_8:
      File = -1073741701;
LABEL_9:
      v27 = File;
      goto LABEL_65;
    }
LABEL_22:
    File = -1073741687;
    goto LABEL_9;
  }
  if ( v43 != 332 )
  {
    if ( (unsigned __int16)(v43 - 448) > 4u )
      goto LABEL_8;
    v15 = 21;
    if ( !_bittest(&v15, (unsigned __int16)(v43 - 448)) )
      goto LABEL_8;
  }
  if ( v47 <= 2 || !v50 )
    goto LABEL_22;
  v16 = v45;
  if ( v45 < 0x78u )
    goto LABEL_8;
  v17 = v49;
LABEL_26:
  if ( !v17 )
    return -1073741687;
  if ( !v44 )
    goto LABEL_8;
  v18 = 40 * v44;
  if ( v14 + v18 + v16 + 24 > (unsigned int)v31 )
    goto LABEL_8;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
  v10 = Heap;
  v34[0] = Heap;
  if ( !Heap )
  {
    File = -1073741801;
    goto LABEL_9;
  }
  File = LdrpResReadFile(Handle, v14 + v45 + 24, Heap, v18);
  v27 = File;
  if ( File < 0 )
    goto LABEL_65;
  v20 = v10;
  v21 = 0;
  if ( v44 )
  {
    do
    {
      v22 = v20[3];
      if ( v17 >= v22 && v17 < v20[4] + v22 )
        break;
      v20 += 10;
      ++v21;
    }
    while ( v21 < v44 );
  }
  if ( v21 >= v44 )
    goto LABEL_8;
  v23 = v17 + (unsigned int)v20[5] - (unsigned __int64)(unsigned int)v20[3];
  if ( v23 )
  {
    File = LdrpResSetFilePointer(Handle, v23);
    v27 = File;
    if ( File >= 0 )
    {
      if ( v29 == 3 )
      {
        v55[0] = 0;
        if ( (v30 & 0x20) != 0 )
        {
          v55[0] = 1;
          v55[2] = 0;
        }
        else
        {
          File = LdrResFallbackLangList(0LL, 0LL, *((unsigned __int16 *)v33 + 8), v30, v55);
          v27 = File;
          if ( File < 0 && v32 )
            goto LABEL_65;
        }
      }
      v28 = 0;
      File = LdrpResSearchResourceInsideDirectory(
               0LL,
               Handle,
               (unsigned int)v31,
               v23,
               (__int64)&v42,
               (__int64)v20,
               v33,
               v29,
               (__int64)v55,
               v35,
               v37,
               v30,
               &v28);
      v27 = File;
      if ( File >= 0 )
      {
        v24 = (_DWORD *)v38;
        if ( v38 )
        {
          if ( v28 )
          {
            LocaleName.Buffer = Src;
            LocaleName.MaximumLength = 172;
            File = RtlLcidToLocaleName(v28, &LocaleName, 2u, 0);
            v27 = File;
            if ( File < 0 )
              goto LABEL_65;
            v25 = -1LL;
            do
              ++v25;
            while ( Src[v25] );
          }
          else
          {
            Src[0] = 0;
            LODWORD(v25) = 0;
          }
          if ( (unsigned int)v25 < *v24 && (v26 = v36) != 0LL )
          {
            memmove(v36, Src, 2LL * (unsigned int)v25);
            *v24 = v25 + 1;
            v26[(unsigned int)v25] = 0;
          }
          else
          {
            *v24 = v25 + 1;
            File = -1073741789;
            v27 = -1073741789;
          }
        }
      }
    }
  }
  else
  {
    File = -1073741701;
    v27 = -1073741701;
  }
LABEL_65:
  if ( v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    File = v27;
  }
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v39, MEMORY[0x7FFE0384]);
  return File;
}
